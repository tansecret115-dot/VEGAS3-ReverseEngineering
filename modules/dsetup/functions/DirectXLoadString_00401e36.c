/* Module: dsetup.dll
   Function: DirectXLoadString
   Address: 00401e36
   Source: Ghidra pseudocode (Stage 10 batch) */


void DirectXLoadString(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  
                    /* 0x1e36  14  DirectXLoadString */
  if ((DAT_0040aa60 == 0) && (iVar1 = FUN_00401c7b((LPCSTR)0x0,&local_8), iVar1 == 0)) {
    return;
  }
  (*DAT_0040aa88)(param_1,param_2,param_3);
  return;
}


