
# Ball Balancing System Development

## Required Matlab Version
This project was developed on Matlab R2020a.

## Required Matlab Extensions

1. **MATLAB Support Package for USB Webcams**
   - [Download Link](https://fr.mathworks.com/matlabcentral/fileexchange/45182-matlab-support-package-for-usb-webcams?s_tid=srchtitle)

2. **Image Acquisition Toolbox Support Package for OS Generic Video Interface**
   - [Download Link](https://fr.mathworks.com/matlabcentral/fileexchange/45183-image-acquisition-toolbox-support-package-for-os-generic-video-interface?s_tid=srchtitle)

3. **Instrument Control Toolbox**
   - [Instrument Control Toolbox](https://fr.mathworks.com/products/instrument.html)

## How to Use

Before launching the main program **Ball_Detection_and_PID.slx**, follow these steps:

1. Read the comments in the blue blocks of **Ball_Detection_and_PID.slx** for program execution instructions.
2. Set up the camera appropriately.
3. Set up the COM port.
4. Run **dataToLookupTable.m**.

## Digital Twin

An incomplete digital twin model is present in the **Modele_3D_Simscape** folder. This model was originally created with Matlab R2022a (**AssemblyCompletv45.slx**), and a version converted for Matlab R2020a is also available (**AssemblyCompletv45_2020a.slx**). 

Before running the model, execute **AssemblyCompletv45_DataFile.m**.
