/* Module: rmbe3260.dll
   Function: FUN_6600d4c0
   Address: 6600d4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6600d4c0(int param_1)

{
  undefined4 *this;
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char local_10c [260];
  int *local_8;
  
  iVar7 = *(int *)(param_1 + 8);
  local_8 = (int *)0x0;
  if (iVar7 == 0) {
    iVar7 = -0x7fffbffb;
  }
  else {
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x10) + 0x10))(iVar7 + 0x10,&local_8);
    if (-1 < iVar7) {
      iVar7 = (**(code **)(*local_8 + 0x1c))(local_8,local_10c,0x103);
      if (-1 < iVar7) {
        pcVar2 = strrchr(local_10c,0x2e);
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_6606c708;
        do {
          pcVar9 = pcVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar8 = pcVar9 + -uVar5;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar2 = pcVar2 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar2 = pcVar2 + 1;
        }
        this = (undefined4 *)(param_1 + 0x70);
        FUN_6605b970(this,local_10c);
        if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))();
          if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
          }
          *(undefined4 *)(param_1 + 0x4c) = 0;
          FUN_6605b970(this,&DAT_66075004);
        }
        piVar3 = FUN_6604fb50(0);
        *(int **)(param_1 + 0x4c) = piVar3;
        if (piVar3 == (int *)0x0) {
          iVar7 = -0x7ff8fff2;
        }
        else {
          iVar7 = (**(code **)(*piVar3 + 0x14))(*this,0x8101,0x20,1);
          if (-1 < iVar7) {
            iVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))();
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0x48) = 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
          }
        }
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar7;
}


