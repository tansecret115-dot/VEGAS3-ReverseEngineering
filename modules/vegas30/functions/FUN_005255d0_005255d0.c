/* Module: vegas30.exe
   Function: FUN_005255d0
   Address: 005255d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005255d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_220 [4];
  CHAR local_210 [259];
  undefined1 local_10d;
  uint local_10c;
  CHAR local_104 [260];
  
  iVar3 = 1;
  *(undefined4 *)(param_1 + 0x100) = 1;
  _SfLoadString_16(DAT_00647204,0x4f76,local_104,0x104);
  iVar1 = FUN_005254d0(param_1,param_2,local_104,0);
  while (iVar1 == 0) {
    iVar3 = iVar3 + 1;
    iVar1 = iVar3;
    uVar2 = _SfGetString_8(DAT_00647204,0x4f76);
    SfPrintF(local_104,"%s (%d)",uVar2,iVar1);
    iVar1 = FUN_005254d0(param_1,param_2,local_104,0);
  }
  puVar4 = local_220;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_10c = local_10c | 10;
  lstrcpynA(local_210,local_104,0x104);
  local_10d = 0;
  FUN_00509a00(param_2,local_220,0);
  return;
}


