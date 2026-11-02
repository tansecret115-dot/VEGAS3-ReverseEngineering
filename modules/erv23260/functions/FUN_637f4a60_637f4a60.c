/* Module: erv23260.dll
   Function: FUN_637f4a60
   Address: 637f4a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f4a60(void *this,int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  piVar4 = param_2;
  puVar7 = (uint *)param_2[3];
  local_14 = (undefined4 *)*puVar7;
  local_10 = (undefined4 *)puVar7[2];
  local_c = (undefined4 *)puVar7[1];
  bVar3 = false;
  local_8 = 0;
  uVar5 = puVar7[6] * puVar7[5] >> 8;
  if ((puVar7[0x1f] == 0) &&
     ((*(int *)((int)this + 0x70) != 0 || (0x3b < *(uint *)((int)this + 0x84))))) {
    uVar11 = 0;
    if (uVar5 != 0) {
      do {
        if ('\x01' < *(char *)((*(byte *)(uVar11 + param_2[1]) & 0x1f) + *(int *)((int)this + 0x2f0)
                              )) {
          bVar3 = true;
          goto LAB_637f4ae5;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar5);
      bVar3 = false;
    }
LAB_637f4ae5:
    if (bVar3) {
      puVar6 = puVar7;
      if ((*(int *)((int)this + 8) != 0x15) && (*(int *)((int)this + 8) != 0x16)) {
        puVar6 = *(uint **)(param_1 + 0xc);
      }
      puVar7 = (uint *)FUN_637f5040(this,(int *)puVar6,(int *)puVar7,puVar7[3],puVar7[4],&local_8);
      if (local_8 != 0) {
        return local_8;
      }
      param_2[3] = (int)puVar7;
      FUN_637fde90(local_14,*puVar7,puVar7[6],puVar7[5],puVar7[7]);
      FUN_637fde90(local_10,puVar7[2],puVar7[6] >> 1,puVar7[5] >> 1,puVar7[7]);
      FUN_637fde90(local_c,puVar7[1],puVar7[6] >> 1,puVar7[5] >> 1,puVar7[7]);
      FUN_637f6ef0(*(void **)((int)this + 0x2f0),*puVar7,puVar7[1],puVar7[5],puVar7[6],puVar7[7],
                   *(int *)((int)this + 0x3c4),*(int *)((int)this + 0x3bc),
                   *(uint *)((int)this + 0x3b4),(int)this + 0x3cc,param_2[1],
                   *(int *)((int)this + 800),(uint)(2 < *(int *)((int)this + 700)),
                   (uint)*(byte *)(*param_2 + 0x90));
      local_14 = (undefined4 *)*puVar7;
      local_c = (undefined4 *)puVar7[1];
      local_10 = (undefined4 *)puVar7[2];
      puVar7[0x1f] = 1;
    }
  }
  if ((*(int *)((int)this + 0x6c) != 0) || (0x45 < *(uint *)((int)this + 0x84))) {
    if ((*(int *)((int)this + 8) == 0x15) || (*(int *)((int)this + 8) == 0x16)) {
      piVar8 = (int *)param_2[3];
    }
    else {
      piVar8 = *(int **)(param_1 + 0xc);
    }
    piVar8 = FUN_637f5040(this,piVar8,(int *)param_2[3],puVar7[3],puVar7[4],&local_8);
    if (local_8 == 0) {
      param_2[3] = (int)piVar8;
      iVar9 = FUN_637f6d70(*(void **)((int)this + 0x2f0),piVar8[5],piVar8[6],piVar8[7]);
      if ((iVar9 != 0) ||
         (local_8 = FUN_637f6be0(*(void **)((int)this + 0x2f0),piVar8[5],piVar8[6],piVar8[7],
                                 (uint)(2 < *(int *)((int)this + 700))), local_8 == 0)) {
        if (*(int *)(*param_2 + 0x14) == 3) {
          pcVar10 = (char *)param_2[1];
          uVar5 = 0;
          param_2 = *(int **)(*(int *)((int)this + 0x344) + 0x11c);
          if (*(int *)((int)this + 0x3c0) != 0) {
            do {
              if (*pcVar10 != '\0') {
                *pcVar10 = (char)*param_2;
              }
              uVar5 = uVar5 + 1;
              pcVar10 = pcVar10 + 1;
              param_2 = (int *)((int)param_2 + 1);
            } while (uVar5 < *(uint *)((int)this + 0x3c0));
          }
          bVar1 = *(byte *)(*(int *)((int)this + 0x344) + 0x94);
        }
        else {
          bVar1 = *(byte *)(*param_2 + 0x90);
        }
        pbVar2 = (byte *)piVar8[7];
        FUN_637f74c0(*(void **)((int)this + 0x2f0),(int)local_14,(int)local_10,(int)local_c,
                     (undefined8 *)*piVar8,(undefined8 *)piVar8[2],(undefined8 *)piVar8[1],
                     (uint)piVar8[5] >> 4,(uint)piVar8[6] >> 4,pbVar2,(int)pbVar2,(int)pbVar2,
                     (int)pbVar2,(byte *)piVar4[1],(uint)(2 < *(int *)((int)this + 700)),(uint)bVar1
                    );
      }
    }
  }
  return local_8;
}


