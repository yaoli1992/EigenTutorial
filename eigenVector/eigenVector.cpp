#include <iostream>

#include <Eigen/Dense>
#include <Eigen/Sparse>

using namespace std;

int main(int argc,char** argv)
{
//   Eigen::VectorXd v(2); //1*2的矩阵
//   v(0) =3;
//   v(1) =2.5;
//   cout<< v<<endl<< std::endl;

//   Eigen::Vector3d v1(1,2,3);
//   std::cout << v1 << std::endl<< std::endl;
//   Eigen::Vector2d v2(1,2);
//   std::cout << v2 << std::endl<< std::endl;
//   v2(0) = 5;
//   std::cout << v2 << std::endl<< std::endl;

//   Eigen::Vector3d v3(1,2,3);
//   std::cout << v3 << std::endl<< std::endl;
//   Eigen::Vector3d v4(2,4,6);
//   std::cout << v4 << std::endl<< std::endl;
//   std::cout << v3+v4 << std::endl<< std::endl;
//   std::cout << 5.0*v3 << std::endl<< std::endl;

//   Eigen::Vector3d v5(1,2,3);
//   std::cout << v5.norm() << std::endl<< std::endl;

//   Eigen::MatrixXd D(2,2);
//   D(0,0) = 3;
//   D(1,0) = 2.5;
//   D(0,1) = 1;
//   D(1,1) = 5;
//   std::cout << D << std::endl;
//   std::cout << D.adjoint() << std::endl;

   Eigen::MatrixXf A = Eigen::MatrixXf::Random(3, 2);
   std::cout << "Here is the matrix A:\n" << A << std::endl;
   Eigen::VectorXf b = Eigen::VectorXf::Random(3);
   std::cout << "Here is the right hand side b:\n" << b << std::endl;
   std::cout << "The least-squares solution is:\n"
        << A.jacobiSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(b) << std::endl;

}