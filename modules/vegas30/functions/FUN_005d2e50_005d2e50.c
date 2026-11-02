/* Module: vegas30.exe
   Function: FUN_005d2e50
   Address: 005d2e50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005d2e50(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int aiStack_38c [3];
  void *pvStack_70;
  int *piStack_30;
  int *piStack_2c;
  int iStack_20;
  
  bVar7 = true;
  if ((((((*param_2 == *(int *)(param_1 + 0x6c0)) && (param_2[1] == *(int *)(param_1 + 0x6c4))) &&
        (param_2[0x43] == *(int *)(param_1 + 0x7cc))) &&
       ((param_2[0x44] == *(int *)(param_1 + 2000) &&
        (uVar1 = *(uint *)(param_1 + 0x7d4), param_2[0x45] == uVar1)))) &&
      ((param_2[0x46] == *(int *)(param_1 + 0x7d8) &&
       ((param_2[0x47] == *(int *)(param_1 + 0x7dc) && (param_2[0x48] == *(int *)(param_1 + 0x7e0)))
       )))) && ((param_2[0x49] == *(int *)(param_1 + 0x7e4) &&
                (param_2[0x14a] == *(int *)(param_1 + 0xbe8))))) {
    bVar7 = false;
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar5 = param_2 + 0x4a;
      piVar4 = (int *)(param_1 + 0x7e8);
      do {
        if (*piVar5 != *piVar4) {
          return true;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar2 < uVar1);
    }
    piVar5 = (int *)param_2[0x158];
    if (piVar5 != (int *)0x0) {
      aiStack_38c[2] = 0;
      aiStack_38c[1] = 0;
      aiStack_38c[0] = 0;
      bVar7 = true;
      iVar3 = (**(code **)(*piVar5 + 0x14))(piVar5,0);
      if (-1 < iVar3) {
        aiStack_38c[2] = 0;
        iVar3 = (**(code **)(*(int *)param_2[0x158] + 0xc))
                          ((int *)param_2[0x158],aiStack_38c + 2,4,0);
        if ((-1 < iVar3) && (bVar7 = false, piVar5 != (int *)0x0)) {
          piVar4 = (int *)0x0;
          if (piVar5 != (int *)0x0) {
            do {
              if (bVar7 != false) {
                return bVar7;
              }
              piVar6 = aiStack_38c;
              for (iVar3 = 0xda; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar6 = 0;
                piVar6 = piVar6 + 1;
              }
              iVar3 = FUN_005e8be0(param_2[0x158],1,aiStack_38c);
              if (iVar3 < 0) {
                return true;
              }
              if (piStack_30 == (int *)0x0) {
                if (piStack_2c == (int *)0x0) {
                  if (aiStack_38c[0] == 4) {
                    iVar3 = *(int *)(iStack_20 + 0x7e8 + aiStack_38c[1] * 4);
                  }
                  else {
                    if (aiStack_38c[0] != 7) goto LAB_005d304c;
                    iVar3 = *(int *)(iStack_20 + 0xbe8);
                  }
                  bVar7 = iVar3 != aiStack_38c[2];
                }
                else {
                  bVar7 = true;
                }
              }
              else {
                bVar7 = true;
              }
LAB_005d304c:
              if (pvStack_70 != (void *)0x0) {
                free(pvStack_70);
              }
              if (piStack_30 != (int *)0x0) {
                (**(code **)(*piStack_30 + 8))(piStack_30);
              }
              if (piStack_2c != (int *)0x0) {
                (**(code **)(*piStack_2c + 8))(piStack_2c);
              }
              piVar4 = (int *)((int)piVar4 + 1);
            } while (piVar4 < piVar5);
            if (bVar7 != false) {
              return bVar7;
            }
          }
          bVar7 = false;
        }
      }
    }
  }
  return bVar7;
}


