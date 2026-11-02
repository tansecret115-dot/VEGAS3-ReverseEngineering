/* Module: vegas30k.dll
   Function: FUN_010a710b
   Address: 010a710b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_010a710b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (in_EAX != 0) {
    if (-1 < in_EAX) goto LAB_010a711f;
    iVar1 = -in_EAX;
  }
  in_EAX = 0;
LAB_010a711f:
  iVar2 = 0;
  if ((param_1 == 0) || (iVar2 = param_1, -1 < param_1)) {
    param_1 = 0;
  }
  else {
    param_1 = -param_1;
    iVar2 = 0;
  }
  FUN_010a7150(param_4,in_EAX,param_1,iVar1,iVar2,0,0,&stack0x00000000);
  return;
}


