/* Module: sfcdi.dll
   Function: FUN_5bf39650
   Address: 5bf39650
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf39650(int *param_1,LPCSTR param_2)

{
  int iVar1;
  uchar local_80 [128];
  
  FUN_5bf395a0(param_1,local_80);
  iVar1 = lstrcmpA(param_2,(LPCSTR)local_80);
  return (bool)('\x01' - (iVar1 != 0));
}


