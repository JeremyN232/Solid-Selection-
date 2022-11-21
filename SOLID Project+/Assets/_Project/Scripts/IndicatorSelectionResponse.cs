using UnityEngine;

public class IndicatorSelectionResponse : MonoBehaviour, ISelectionResponse
{
    [SerializeField] private GameObject indicatorPrefab;
    [SerializeField] private Vector3 offset;
    [SerializeField] private Vector3 rotation;

    private GameObject _indicator;

    public void OnSelect(Transform selection)
    {
        _indicator =  Instantiate(indicatorPrefab, selection);
        _indicator.transform.localPosition += offset;
        
    }

    public void Update()
    {
        _indicator.transform.Rotate(rotation * Time.deltaTime);
    }

    public void OnDeselect(Transform selection)
    {
        if (_indicator != null)
        {
            Destroy(_indicator);
        }
    }
}