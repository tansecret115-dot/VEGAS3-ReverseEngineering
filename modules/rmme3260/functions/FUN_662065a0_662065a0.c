/* Module: rmme3260.dll
   Function: FUN_662065a0
   Address: 662065a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662065a0(void *this,undefined1 *param_1,int param_2,undefined4 param_3,int param_4,
            ushort *param_5)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_22;
  uint local_1e;
  uint local_10;
  int *local_c;
  int *local_8;
  
  iVar5 = -0x7ff8ffa9;
  local_10 = 0;
  if (param_4 != 0) {
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    if (((param_1 != (undefined1 *)0x0) && (param_2 != 0)) && (CONCAT11(*param_1,param_1[1]) == 0))
    {
      local_22 = (uint)(byte)param_1[6] << 0x18 | (uint)(byte)param_1[7] << 0x10 |
                 (uint)(byte)param_1[8] << 8 | (uint)(byte)param_1[9];
      local_1e = (uint)CONCAT11(param_1[10],param_1[0xb]);
    }
    uVar4 = 0;
    iVar3 = param_2 + -0xc;
    param_2 = 0;
    if (*(short *)((int)this + 0x50) != 0) {
      do {
        uVar1 = *(ushort *)(*(int *)((int)this + 0x46) + (param_2 & 0xffffU) * 2);
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),uVar1);
        if (*(short *)(*(int *)((int)this + 0x4a) + (uint)uVar1 * 2) == (short)local_1e) {
          iVar5 = (**(code **)(**(int **)((int)this + 0x5a) + 0xc))
                            (*(int **)((int)this + 0x5a),&DAT_6626a5f8,&local_8);
          if (iVar5 < 0) break;
          iVar5 = (**(code **)(*local_8 + 0x10))(local_8,param_1 + 0xc,iVar3);
          if (iVar5 < 0) {
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
            }
            break;
          }
          cVar2 = FUN_66206780(this,local_22,(byte)local_1e);
          iVar5 = (**(code **)(**(int **)((int)this + 0x5a) + 0xc))
                            (*(int **)((int)this + 0x5a),&DAT_6626a608,&local_c);
          if ((-1 < iVar5) &&
             (iVar5 = (**(code **)(*local_c + 0x2c))(local_c,local_8,local_22,param_3,cVar2,uVar4),
             -1 < iVar5)) {
            if ((ushort)local_10 < *param_5) {
              *(int **)(param_4 + (local_10 & 0xffff) * 4) = local_c;
              (**(code **)(*local_c + 4))(local_c);
              local_10 = local_10 + 1;
              uVar4 = local_10;
            }
            else {
              iVar5 = -0x7fffbffb;
              uVar4 = local_10;
            }
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          if (iVar5 < 0) break;
        }
        param_2 = param_2 + 1;
      } while ((ushort)param_2 < *(ushort *)((int)this + 0x50));
    }
    *(uint *)((int)this + 0x52) = local_1e >> 1 & 1;
    *(uint *)((int)this + 0x56) = local_22;
  }
  *param_5 = (ushort)local_10;
  return iVar5;
}


