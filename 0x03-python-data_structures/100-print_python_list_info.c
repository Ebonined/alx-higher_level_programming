#include <Python.h>

/**
 * print_python_list_info - Prints about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	int sizen, allo, i;
	PyObject *obj;

	sizen = Py_SIZE(p);
	allo = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", sizen);
	printf("[*] Allocated = %d\n", allo);

	for (i = 0; i < sizen; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(p, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
