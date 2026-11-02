/* Module: erv23260.dll
   Function: FUN_6380c440
   Address: 6380c440
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_6380c440(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 == 0) {
    cVar1 = '\b';
    if (param_3 != 0) {
      cVar1 = '\t';
    }
  }
  else {
    if (param_1 == 6) {
      return (param_3 != 0) + '\x01';
    }
    if (param_1 == 10) {
      if (param_2 == 0) {
        return '\x03';
      }
      return (param_3 != 0) + '\x04';
    }
  }
  return cVar1 + '\x01';
}


