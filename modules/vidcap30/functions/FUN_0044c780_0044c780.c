/* Module: vidcap30.exe
   Function: FUN_0044c780
   Address: 0044c780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044c780(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_43c;
  undefined4 local_438 [265];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*param_1 != 0) {
    FUN_0044c8a0(*param_1);
  }
  puVar2 = local_438;
  for (iVar1 = 0x10e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_14 = 0;
  local_10 = 0;
  local_4 = 3;
  local_c = 0x13;
  local_8 = 0x14;
  _SfLoadString_16(DAT_005ba2a0,0xc4fe,local_438,0x10a);
  iVar1 = FUN_0044eee0(&local_43c,0,local_438);
  if (-1 < iVar1) {
    iVar1 = FUN_0044efb0(local_43c);
    if (-1 < iVar1) {
      if (DAT_005bb7a0 != 0) {
        iVar1 = FUN_0044f0c0(local_43c);
      }
      if (-1 < iVar1) {
        iVar1 = FUN_0044f180(local_43c);
        if (-1 < iVar1) {
          iVar1 = FUN_0044f260(local_43c);
          if (-1 < iVar1) {
            iVar1 = FUN_0044f380(local_43c);
            if (-1 < iVar1) {
              *param_1 = local_43c;
              return iVar1;
            }
          }
        }
      }
    }
  }
  FUN_0044c8a0(local_43c);
  *param_1 = 0;
  return iVar1;
}


