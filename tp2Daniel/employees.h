struct
{

    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}typedef employee;


/** \brief -- Inicializa los empleados en empty.
 *
 * \param list[] employee -- Array de la lista de todos los empleados.
 * \param len int -- Largo del array.
 * \return void -- no retorna nada.
 *
 */
void initEmployees(employee list[], int len);


/** \brief -- La funcion agrega un empleado
 *
 * \param void -- no recibe nada.
 * \return employee -- retorna un empleado
 *
 */
employee addEmployee(void);


/** \brief -- Busca espacio libre en el array de empleados
 *
 * \param list[] employee -- Recibe el array de empleados
 * \param len int -- Largo del array
 * \return int -- Retorna si esta lleno o vacio el lugar
 *
 */
int searchSpace(employee list[], int len);


/** \brief -- La funcion realiza una carga del array repitiendo "chargeOneEmployee" hasta que el usuario decida
 *
 * \param list[] employee -- Recibe el array de empleados
 * \param len int -- Largo del array
 * \return void -- No retorna nada
 *
 */
void chargeListOfEmployees(employee list[], int len);



/** \brief -- La funcion muestra los datos de un solo empleado
 *
 * \param oneEmployee employee -- Recibe la funcion employee para cargar los parametros
 * \return void -- No retorna nada
 *
 */
void printOneEmployee(employee oneEmployee);


/** \brief -- La funcion realiza una carga del array repitiendo "printOneEmployee" hasta que el usuario decida
 *
 * \param list[] employee -- Recibe el array de empleados
 * \param len int -- Largo del array
 * \return void -- No retorna nada
 *
 */
void printAllEmployees(employee list[], int len);


/** \brief -- Carga la informacion mostrada en el menu
 *
 * \return int -- Retorna la respuesta elegida al switch del main
 *
 */
int menu();


/** \brief -- Busca un empleado recibiendo el ID del mismo
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \param id int -- Recibe el ID a buscar desde el switch del main
 * \return int -- Retorna si fue exitosa o no la busqueda
 *
 */
int findEmployeeById(employee list[], int len, int id);


/** \brief -- Elimina un empleado recibiendo el ID del mismo
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \param id int -- Recibe el ID a buscar desde el switch del main
 * \return int -- Retorna si fue exitosa la operacion
 *
 */
int removeEmployee(employee list[], int len, int id);


/** \brief -- Ordena el array de empleados
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \param order int -- Recibe del switch del main en que orden quiere el orden
 * \return void -- No retorna nada
 *
 */
void orderEmployees(employee list[], int len, int order);


/** \brief Modifica el empleado recibiendo el ID
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \param id int -- Recibe el ID a buscar desde el switch del main
 * \return void -- No retorna nada
 *
 */
void modifyEmployee(employee list[], int len, int id);


/** \brief -- Calcula de todos los salarios, la persona que posee el mayor
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \return void -- No retorna nada
 *
 */
void salaryExceed(employee list[], int len);


/** \brief -- Calcula el promedio de salarios de los empleados
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \return int -- Retorna el resultado de la cuenta
 *
 */
int salariesAverage(employee list[], int len);


/** \brief -- Acumula los salarios de los empleados
 *
 * \param list[] employee -- Recibe el array de  empleados
 * \param len int -- Largo del array
 * \return float -- Retorna la suma de todos los salarios
 *
 */
float salaries(employee list[], int len);
