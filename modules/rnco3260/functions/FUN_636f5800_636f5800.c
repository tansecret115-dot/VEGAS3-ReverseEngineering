/* Module: rnco3260.dll
   Function: FUN_636f5800
   Address: 636f5800
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_636f5800(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  uint *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar1 = param_1;
  iVar2 = 0x100 - param_1;
  if (iVar2 < 0xd8) {
    if (iVar2 < 0x7d) {
      if (iVar2 < 0x40) {
        return param_1;
      }
      local_10 = 0x55;
    }
    else {
      local_10 = 0x40;
    }
  }
  else {
    local_10 = 0x33;
  }
  local_c = param_1;
  local_8 = 0;
  bVar6 = false;
  do {
    if (bVar6) {
      local_8 = 0xff;
    }
    param_1 = 0;
    bVar6 = false;
    do {
      if (bVar6) {
        param_1 = 0xff;
      }
      iVar2 = 0;
      local_14 = param_2 + local_c;
      do {
        if (iVar2 == 0x100) {
          iVar2 = 0xff;
        }
        iVar4 = 0;
        uVar3 = (iVar2 << 8 | param_1) << 8 | local_8;
        puVar5 = param_2;
        if (0 < (int)uVar1) {
          do {
            if ((*puVar5 & 0xffffff) == uVar3) goto LAB_636f58c7;
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar4 < (int)uVar1);
        }
        local_c = local_c + 1;
        *local_14 = uVar3;
        local_14 = local_14 + 1;
LAB_636f58c7:
        iVar2 = iVar2 + local_10;
      } while (iVar2 < 0x101);
      param_1 = param_1 + local_10;
      bVar6 = param_1 == 0x100;
    } while ((int)param_1 < 0x101);
    local_8 = local_8 + local_10;
    bVar6 = local_8 == 0x100;
    if (0x100 < (int)local_8) {
      return local_c;
    }
  } while( true );
}


