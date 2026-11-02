/* Module: vidcap30.exe
   Function: FUN_0051488b
   Address: 0051488b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0051488b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (in_EAX != 0) {
    if (-1 < in_EAX) goto LAB_0051489f;
    iVar1 = -in_EAX;
  }
  in_EAX = 0;
LAB_0051489f:
  iVar2 = 0;
  if ((param_1 == 0) || (iVar2 = param_1, -1 < param_1)) {
    param_1 = 0;
  }
  else {
    param_1 = -param_1;
    iVar2 = 0;
  }
  FUN_005148d0(param_4,in_EAX,param_1,iVar1,iVar2,0,0,&stack0x00000000);
  return;
}


