function rosmsgOut = AckermannDriveStamped(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.Header = bus_conv_fcns.ros.busToMsg.std_msgs.Header(slBusIn.Header,rosmsgOut.Header(1));
    rosmsgOut.Drive = bus_conv_fcns.ros.busToMsg.ackermann_msgs.AckermannDrive(slBusIn.Drive,rosmsgOut.Drive(1));
end
