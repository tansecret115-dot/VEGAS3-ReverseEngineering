/* Module: sfpublish.dll
   Function: FUN_004136b0
   Address: 004136b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004136b0(void *this,char *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,
            int *param_5)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int local_1c;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  local_1c = 0;
  if ((*(int *)((int)this + 0xc) != 0) ||
     (local_1c = FUN_004135f0(this,(undefined4 *)0x0,0), -1 < local_1c)) {
    pbVar2 = FUN_00413580(*(byte **)((int)this + 4),*(int *)((int)this + 8),
                          *(byte **)((int)this + 0xc),*(int *)((int)this + 0x10));
    if (pbVar2 == (byte *)0x0) {
      return -0x7ffb1ff6;
    }
    do {
      iVar6 = *(int *)((int)this + 0x10);
      pbVar3 = FUN_00413580(pbVar2 + iVar6,
                            ((*(int *)((int)this + 4) - iVar6) - (int)pbVar2) +
                            *(int *)((int)this + 8),*(byte **)((int)this + 0xc),iVar6);
      if (pbVar3 == (byte *)0x0) {
        return -0x7ffb1ff6;
      }
      pbVar2 = pbVar2 + *(int *)((int)this + 0x10);
      pbVar4 = FUN_00413580(pbVar2,(int)pbVar3 - (int)pbVar2,(byte *)s_Content_Disposition_0043f408,
                            0x13);
      if (pbVar4 == (byte *)0x0) {
        return -0x7ffb1f0c;
      }
      local_8 = DAT_004362e8;
      local_2 = DAT_004362ee;
      local_4 = DAT_004362ec;
      pbVar5 = FUN_00413580(pbVar4,(int)pbVar3 - (int)pbVar4,(byte *)&local_8,6);
      if (pbVar5 != (byte *)0x0) {
        uVar7 = 0xffffffff;
        pcVar8 = param_1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (((int)(~uVar7 - 1) <= (int)pbVar3 - (int)(pbVar5 + 6)) &&
           (iVar6 = strncmp((char *)(pbVar5 + 6),param_1,~uVar7 - 1), iVar6 == 0)) {
          local_10 = DAT_004362e0;
          local_c = DAT_004362e4;
          pbVar4 = FUN_00413580(pbVar4,(int)pbVar3 - (int)pbVar4,(byte *)&local_10,4);
          if (pbVar4 != (byte *)0x0) {
            pbVar4 = pbVar4 + 4;
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = pbVar2;
            }
            if (param_3 != (int *)0x0) {
              *param_3 = (int)pbVar4 - (int)pbVar2;
            }
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = pbVar4;
            }
            if (param_5 == (int *)0x0) {
              return local_1c;
            }
            *param_5 = (int)pbVar3 - (int)pbVar4;
            return local_1c;
          }
          local_1c = -0x7ffb1f0c;
        }
      }
      pbVar2 = pbVar3;
    } while (-1 < local_1c);
  }
  return local_1c;
}


