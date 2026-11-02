/* Module: vidcap30.exe
   Function: FUN_0044f260
   Address: 0044f260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f260(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_44c;
  undefined4 local_448;
  int local_444;
  undefined4 local_440;
  undefined1 local_43c [4];
  undefined4 local_438 [265];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = DAT_005bb838;
  puVar7 = local_438;
  for (iVar5 = 0x10e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_440 = DAT_005bb838;
  local_10 = 4;
  local_14 = 6;
  local_4 = 3;
  local_c = 0x11;
  local_8 = 0x12;
  _SfLoadString_16(DAT_005ba2a0,0xc56f,local_438,0x10a);
  puVar7 = local_438;
  uVar1 = FUN_0044c610(param_1);
  iVar5 = FUN_0044eee0(&local_448,uVar1,puVar7);
  local_444 = FUN_0042e510(uVar2);
  local_44c = 0;
  if (0 < local_444) {
    do {
      if (iVar5 < 0) {
        return iVar5;
      }
      uVar2 = FUN_00443740(uVar2,local_44c);
      iVar3 = FUN_00443780(uVar2);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          if (iVar5 < 0) break;
          iVar4 = FUN_004437e0(uVar2,iVar6);
          if ((*(byte *)(iVar4 + 0x38) & 4) != 0) {
            iVar5 = FUN_0044f500(local_43c,local_448,iVar4);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      local_44c = local_44c + 1;
      uVar2 = local_440;
    } while (local_44c < local_444);
  }
  return iVar5;
}


