pragma solidity ^0.8.0;

contract SimpleContract {
    uint public uintVariable;
    bool public boolVariable;
    string public stringVariable;
    address public addressVariable;
    
    function setUintVariable(uint newValue) public returns (uint) {
        uintVariable = newValue;
        return uintVariable;
    }
    
    function getUintVariable() public view returns (uint) {
        return uintVariable;
    }
    
    function setBoolVariable(bool newValue) public returns (bool) {
        boolVariable = newValue;
        return boolVariable;
    }
    
    function getBoolVariable() public view returns (bool) {
        return boolVariable;
    }
    
    function setStringVariable(string memory newValue) public returns (string memory) {
        stringVariable = newValue;
        return stringVariable;
    }
    
    function getStringVariable() public view returns (string memory) {
        return stringVariable;
    }
    
    function setAddressVariable(address newValue) public returns (address) {
        addressVariable = newValue;
        return addressVariable;
    }
    
    function getAddressVariable() public view returns (address) {
        return addressVariable;
    }
}
