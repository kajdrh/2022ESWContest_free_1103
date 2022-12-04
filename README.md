# Face Tracking 스마트 거치대
> 산업통상부가 주최한 "2022 임베디드 소프트웨어 경진대회에 자유공모 주제로 참여 깊이카메라와 매니퓰레이터로 Face Tracking 스마트폰 거치대 개발
> 
> ISP_Final에서 build를 돌리기 위해서는 해당 파일을 다운 받아서 폴더에 넣어놔야한다.
> 
> 해당 파일 Name : shape_predictor_68_face_landmark.dat
> 
> 다운 경로 : https://osdn.net/projects/sfnet_dclib/downloads/dlib/v18.10/shape_predictor_68_face_landmarks.dat.bz2/
> 
> 또 해야할것
> 
> dlib-19.24.tar.gz 다운 경로 : http://dlib.net/ -> Unzip
> 
> CMakeLists.txt 파일에 Line:14에 경로를 맞춰주어야한다.
> 
> Qt_Final는 socketclient.h에서 Line: 18에 IP를 Jetson Nano의 IP로 수정해야한다.
> 

![화면 캡처 2022-09-15 200938](https://user-images.githubusercontent.com/102636954/190389213-c3578d03-5c9e-411d-9065-a8ffede634c3.png)
