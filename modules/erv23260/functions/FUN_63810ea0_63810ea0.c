/* Module: erv23260.dll
   Function: FUN_63810ea0
   Address: 63810ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63810ea0(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_20;
  uint local_c;
  uint *local_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 8) + -0x24 + *(int *)(param_1 + 0x120) * 0x7c);
  local_8 = (uint *)0x0;
  iVar1 = *(int *)(param_1 + 8) + -0x7c + *(int *)(param_1 + 0x120) * 0x7c;
  if ((iVar4 == 0) || (bVar3 = false, iVar4 == 1)) {
    bVar3 = true;
  }
  local_20 = 0;
  local_c = (uint)*(byte *)(iVar1 + 0x66);
  do {
    if (local_20 == 0) {
      local_8 = *(uint **)(iVar1 + 0x70);
    }
    if (local_20 == 4) {
      local_8 = *(uint **)(iVar1 + 0x74);
    }
    if ((bVar3) && (*(int *)(param_1 + 0x178) == 0)) {
      uVar2 = *local_8;
      local_8 = local_8 + 1;
      FUN_637fd360(*(void **)(param_1 + 4),(uVar2 >> 0x10) - 0x7f & 0xff,8);
    }
    if ((local_c & 1) != 0) {
      do {
        uVar2 = *local_8;
        iVar4 = (uVar2 >> 0x18) * 2;
        uVar8 = (uVar2 >> 0x10 & 0x7f) + 1;
        uVar5 = uVar2 >> 0xf & 1;
        if (((byte)(&DAT_63830510)[iVar4] == 0xff) || ((byte)(&DAT_63830515)[iVar4] < uVar8)) {
          FUN_637fd360(*(void **)(param_1 + 4),3,7);
          FUN_637fd360(*(void **)(param_1 + 4),(uint)(0x80000000 < uVar2),1);
          FUN_637fd360(*(void **)(param_1 + 4),uVar2 >> 0x19 & 0x3f,6);
          if (*(int *)(param_1 + 400) != 0) {
            iVar4 = (uVar2 & 0x7fff) - (uint)(*(byte *)(iVar1 + 0x6c) >> 1);
            if (iVar4 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(uint *)(*(int *)(param_1 + 0x140) +
                               ((uint)(*(int *)(param_1 + 0x44 + (uint)*(byte *)(iVar1 + 0x6c) * 4)
                                      * iVar4) >> 0x11) * 4);
            }
            if ((*(int *)(param_1 + 400) != 0) && (0x7f < uVar7)) {
              if (uVar5 != 0) {
                uVar7 = -uVar7 & 0x7ff;
              }
              FUN_637fd360(*(void **)(param_1 + 4),0x80,8);
              uVar6 = 0xb;
              uVar8 = (uVar7 & 0x1f) << 6 | uVar7 >> 5 & 0x3f;
              goto LAB_63811077;
            }
          }
          if (uVar5 != 0) {
            uVar8 = -uVar8 & 0xff;
          }
          if (uVar8 == 0) {
            uVar8 = 1;
          }
          if (uVar8 == 0x80000000) {
            uVar8 = 1;
          }
          uVar6 = 8;
        }
        else {
          uVar6 = *(uint *)(&DAT_638302cc + ((byte)(&DAT_63830510)[iVar4] + uVar8) * 4) & 0xf;
          uVar8 = *(uint *)(&DAT_638302cc + ((byte)(&DAT_63830510)[iVar4] + uVar8) * 4) >>
                  (0x20U - (char)uVar6 & 0x1f) & ~(uint)(uVar5 == 0);
        }
LAB_63811077:
        FUN_637fd360(*(void **)(param_1 + 4),uVar8,uVar6);
        local_8 = local_8 + 1;
      } while (0x80000000 < uVar2 == 0);
    }
    local_20 = local_20 + 1;
    local_c = local_c >> 1;
    if (5 < local_20) {
      return 0;
    }
  } while( true );
}


