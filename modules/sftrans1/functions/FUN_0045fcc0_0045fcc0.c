/* Module: sftrans1.dll
   Function: FUN_0045fcc0
   Address: 0045fcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045fcc0(undefined4 param_1,int param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x111) {
    switch(param_3) {
    case 1:
    case 2:
    case 6:
    case 7:
      uVar1 = 1;
    }
  }
  return uVar1;
}


