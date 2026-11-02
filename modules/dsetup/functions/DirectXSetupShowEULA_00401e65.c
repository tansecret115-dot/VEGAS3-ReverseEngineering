/* Module: dsetup.dll
   Function: DirectXSetupShowEULA
   Address: 00401e65
   Source: Ghidra pseudocode (Stage 10 batch) */


void DirectXSetupShowEULA(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
                    /* 0x1e65  16  DirectXSetupShowEULA */
  if ((DAT_0040aa60 == 0) && (iVar1 = FUN_00401c7b((LPCSTR)0x0,&local_8), iVar1 == 0)) {
    return;
  }
  (*DAT_0040aa8c)(param_1);
  return;
}


