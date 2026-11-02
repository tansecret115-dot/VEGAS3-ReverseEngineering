/* Module: rmbe3260.dll
   Function: FUN_660396d0
   Address: 660396d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6603972f) */

int __thiscall FUN_660396d0(void *this,uint *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  short local_14;
  undefined4 local_12;
  uint local_e;
  undefined2 local_a;
  int local_8;
  
  if (*(uint *)((int)this + 0x118) < *(uint *)((int)this + 0x11c)) {
    iVar3 = *(int *)(*(int *)((int)this + 4) + 0x20);
    local_8 = 0xc;
    *param_3 = (*(int *)(*(int *)((int)this + 4) + 0x14) - *(int *)(iVar3 + 0xc)) +
               *(int *)(iVar3 + 4);
    piVar1 = *(int **)((int)this + 4);
    iVar3 = piVar1[5];
    if ((uint)piVar1[6] < iVar3 + 0xcU) {
      puVar2 = (undefined1 *)(**(code **)(*piVar1 + 0x24))(&local_8);
    }
    else {
      *(int *)(piVar1[8] + 0x14) = *(int *)(piVar1[8] + 0x14) + 1;
      puVar2 = (undefined1 *)piVar1[5];
      piVar1[5] = iVar3 + 0xcU;
    }
    iVar3 = FUN_66031360(this,(int)puVar2,0xc,local_8);
    if (iVar3 == 0) {
      if ((puVar2 == (undefined1 *)0x0) || (local_8 == 0)) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        local_14 = CONCAT11(*puVar2,puVar2[1]);
        puVar4 = puVar2 + 2;
        if (local_14 == 0) {
          local_12 = CONCAT22(CONCAT11(puVar2[4],puVar2[5]),CONCAT11(*puVar4,puVar2[3]));
          local_e = (uint)(byte)puVar2[6] << 0x18 | (uint)(byte)puVar2[7] << 0x10 |
                    (uint)(byte)puVar2[8] << 8 | (uint)(byte)puVar2[9];
          local_a = CONCAT11(puVar2[10],puVar2[0xb]);
          puVar4 = puVar2 + 0xc;
        }
      }
      if (puVar4 != (undefined1 *)0x0) {
        if (local_14 == 0) {
          *param_2 = (local_12 & 0xffff) - 0xc;
          *(undefined2 *)(param_1 + 1) = local_12._2_2_;
          *param_1 = local_e;
          *(undefined2 *)(param_1 + 2) = local_a;
          piVar1 = *(int **)((int)this + 4);
          if (puVar2 != (undefined1 *)0x0) {
            puVar4 = *(undefined1 **)(piVar1[8] + 0xc);
            if ((puVar4 == puVar2) || ((puVar4 < puVar2 && (puVar2 < (undefined1 *)piVar1[6])))) {
              piVar1 = (int *)(piVar1[8] + 0x14);
              *piVar1 = *piVar1 + -1;
            }
            else {
              (**(code **)(*piVar1 + 0x28))(puVar2);
            }
          }
          piVar1 = *(int **)((int)this + 4);
          local_8 = *param_2;
          if (local_8 < 0) {
            piVar1[0x10] = 0x16;
            iVar5 = 0;
          }
          else {
            iVar3 = piVar1[5];
            if ((uint)piVar1[6] < (uint)(local_8 + iVar3)) {
              iVar5 = (**(code **)(*piVar1 + 0x24))(&local_8);
            }
            else {
              *(int *)(piVar1[8] + 0x14) = *(int *)(piVar1[8] + 0x14) + 1;
              if (local_8 == 0) {
                iVar5 = *(int *)(piVar1[8] + 0xc);
              }
              else {
                iVar5 = piVar1[5];
                piVar1[5] = local_8 + iVar3;
              }
            }
          }
          iVar3 = FUN_66031360(this,iVar5,*param_2,local_8);
          if (iVar3 == 0) {
            return iVar5;
          }
          if (iVar3 == 0x40040) {
            *(undefined4 *)((int)this + 0x84) = 0;
            (**(code **)(**(int **)((int)this + 4) + 8))(*param_3,0);
            return 0;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x24) = 0x80040005;
        }
      }
    }
    else if (iVar3 == 0x40040) {
      *(undefined4 *)((int)this + 0x84) = 0;
      return 0;
    }
  }
  return 0;
}


