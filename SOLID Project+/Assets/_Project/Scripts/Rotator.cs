using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour
{
    [SerializeField] private Vector3 rotation;

    public void FixedUpdate()
    {
        transform.Rotate(rotation * Time.deltaTime);
    }

}
