# OOP-Project
**For more details about the project:** 
[Project Reports 1](https://github.com/AyseAyhan/OOP-Project/blob/679670c9a581535994f7d35400fd9977b12439a1/2022Guz_NTP1_Donem_Projesi_1nci_asama_v1_0_EK1.pdf)

[Project Reports 2](https://github.com/AyseAyhan/OOP-Project/blob/679670c9a581535994f7d35400fd9977b12439a1/2022Guz_NTP1_Donem_Projesi_2nci_asama_v1_0.pdf)

# OOP-Project
Project Description:
The scope of the project covers the creation of 3D grid-based maps with point clouds (Point Cloud) and point clouds provided by depth sensors. The depth camera, pictured in Figure 1, provides depth information as well as colored pixel values in the field of view. The 3D depth information obtained is expressed with 3D points defined according to the camera. The set of points formed by these points is called a point cloud. Figure 1 shows the representation of the point cloud obtained from a rabbit surface.
Each 3D point in the point cloud taken from a camera is defined according to the coordinate system defined on that camera. For example, the point cloud shown in the blue ellipse in Figure 2 is the coordinate 𝑂􀮼􀬵.
defined by the system. The point cloud shown in the green ellipse is defined according to the 𝑂􀮼􀬶 coordinate system. To combine these two point clouds into a single point cloud,
It is necessary to transform the points so that they are defined according to a common coordinate system (𝑂􀮻). The representation of point P relative to the {A} coordinate axis is given below.

Project Requests:
Within the scope of the project, it is requested to perform operations on a given point cloud and to create a 3D grid-based map using this point cloud. The following classes will be developed as UML
is given. Mandatory ones are given for member functions. Apart from that, you can include member functions and member data that you need or want to add to the classes.
The draft UML class diagram that is expected to be developed is given in Figure 3. This design should be generally faithful but can be modified if needed. The descriptions of the classes and member functions in the design are as follows:
Point Class: This class holds the coordinates of 3D points in the point cloud. The equal operator (= =) checks whether two points are equal. The Distance function calculates and returns the Euclidean distance between two points.
PointCloud Class: Keeps its points in a dynamically created Point array. The size of the array is taken as a parameter in the constructor function when creating the object. The + operator returns a single point cloud with the points that two point clouds have. The = operator copies one point cloud to another point cloud. It is also necessary to write a copy constructor function.
Transform Class: It takes the distance (trans) and rotation angles (angles) between the origins of two coordinate axes, as explained in the explanations section. Creates the transformation matrix (transMatrix). It then transforms the point or point cloud received with the doTrans function and returns the transformed point or point cloud.
DepthCamera Class: When the capture function is called from the file named (fileName), it reads the points and assigns these points to the created point cloud object. Returns the point cloud. This process is a simulation of the camera. Points are taken from a file rather than a camera.
PointCloudRecorder Class: This is used to save point clouds to file. When the save function is called, the file named with fileName is opened, the points in the point cloud given as a parameter are saved in this file.
3DGridMap Class: This class creates a 3D grid-based map. Here, the data point cloud will be transformed into a grid-based map as seen in Figure 4. As seen in Figure 5, the environment on the map is represented by cubes of equal size. This is represented by cubes map[][][]. Here, the i,j,k values indicate the location of the cube. The value of the cube can be either true or false. Depth specifies the number of cubes in the x, y and z axis directions, and gridSize specifies the side length of the cubes. All cubes are assigned a false value with the constructor function. Thus, the area on the map is completely empty. With the insert functions, it determines which cube each point is in and makes the value of that cube true. The getGrid function returns values for the related grid.

