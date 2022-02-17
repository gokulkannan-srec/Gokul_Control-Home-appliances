# Implementation
  Home automation has recently come into the limelight and thus has undergone large scale development. Everything from lights and gas stoves to a garage door can be controlled using a central panel in the house or through wireless devices using an application or even voice commands. It has been a huge advancement in technology, where it proves very useful in big houses or for the differently abled such as for the blind etc.
            
 It goes from basic switch controls that turn the lights on/off to creating different environments in the house based on requirements or mood, calling an Uber cab for you, controlling the HVAC systems of the house, Audio Visual entertainment systems etc. and many other advanced functions in the technological aspect.
 
 Home automation is not only a luxury, but for certain demographics like the quadriplegic, the elderly and the differently abled, it can be of great assistance. A home automation system makes them independent and self-reliant to a certain extent
 
 The current market leaders in home automation technologies are Google Home, Amazon Echo, Alexa, Wink Hub, Logitech Harmony and Apple HomeKit. All of these are only the control hubs and require the purchase of home automation compliant appliances to function. Examples of such appliances are Phillips Hue, Nest Thermostat, Canary, Sentri, Google Cast and Avion. 

The papers we studied did not rely on such devices. Instead they built their own test network of devices using cost effective components like microcontrollers and relay circuits on which they ran their respective algorithms.

# FEATURES 

Smart Speech Sense:

  The application will be coded as such to decode the meaning of any statement from the user. The user won’t be restricted to use of any particular command set. He would just have to state out his command & the application will itself sense the meaning of the user’s speech & convert it into respective available command (this is done by Google). 

Bluetooth Range:

The system can have a variety of Bluetooth ranges. Depending upon the use, required Bluetooth range module can be used the system. It thus makes the system cost dependent upon the kind of use of the system. 
            
Voice Command:

 The project will have an android application in the user’s android device.This application is designed to receive the voice commands from the user and
automatically. This application will be automatically convert the voice signals into digital data and send these signals to the microcontroller.

# RESOURCSE USED:
 
Arduino Uno: 
           
   This microcontroller is based on the ATmega328. There are total of 20 pins(0-19)out of which 6 are analog inputs which can also be used as general purpose pins, a ceramic resonator of frequency 16MHz, an USB connection, a power jack and a reset button. It contains everything needed to support a microcontroller.

Bluetooth Module(HC 05):
           
  Bluetooth Sub-modules work well with Arduino and other Microcomputers.HC-05 is a more capable module that can be set to be either Master or Slave. HC-05 is small (3 cm long) and run on 3.3V power with 3.3V signal levels, they have no pins and usually solder to a larger board. The module has two modes of operation, Command Mode where we can send AT commands to it and Data Mode where it transmits and receives data to another Bluetooth module. “Breakout" Boards that make these easy to use are available and recommended. These mount the sub- module like that shown on the right on a slightly larger board.
 
# SOFTWARE DESIGN:

            The software section includes speech recognition software design and embedded software design. Voice recognition is the technology by which sounds, phrases etc. spoken by individuals are converted into electrical signals and these signals are changed into coding patterns to which meaning is allocated. This concept could more generally be called as sound recognition or speech recognition. Human voice is mainly focused here, because we most naturally and most frequently use our voices to communicate our thoughts to. These human voices are converted into signals by application
