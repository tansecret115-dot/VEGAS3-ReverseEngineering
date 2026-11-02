/* Module: vidcap30.exe
   Function: FUN_00440bc0
   Address: 00440bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440bc0(int param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_3e8 [4];
  undefined4 local_3d8;
  undefined4 local_3d4;
  CHAR local_2b4 [259];
  undefined1 local_1b1;
  CHAR local_1b0 [127];
  undefined1 local_131;
  undefined4 local_12c;
  
  puVar2 = local_3e8;
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_3e8[2] = 1;
  local_3e8[1] = 1;
  local_12c = 1;
  local_3d8 = param_4;
  local_3e8[0] = 1000;
  local_3d4 = param_5;
  lstrcpynA(local_1b0,param_2,0x80);
  local_131 = 0;
  lstrcpynA(local_2b4,param_3,0x104);
  local_1b1 = 0;
  _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x1c64),local_3e8,1000,0xffffffff,0);
  return;
}


