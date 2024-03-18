function rosmsgOut = AckermannDrive(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.SteeringAngle = single(slBusIn.SteeringAngle);
    rosmsgOut.SteeringAngleVelocity = single(slBusIn.SteeringAngleVelocity);
    rosmsgOut.Speed = single(slBusIn.Speed);
    rosmsgOut.Acceleration = single(slBusIn.Acceleration);
    rosmsgOut.Jerk = single(slBusIn.Jerk);
end
