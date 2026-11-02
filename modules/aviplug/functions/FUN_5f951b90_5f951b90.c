/* Module: aviplug.dll
   Function: FUN_5f951b90
   Address: 5f951b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f951b90(int *param_1,IID *param_2,int *param_3,undefined4 param_4)

{
  HRESULT HVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *local_8;
  int *local_4;
  
  piVar8 = param_1;
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  HVar1 = CoCreateInstance(param_2,(LPUNKNOWN)0x0,3,(IID *)&DAT_5f9eebf8,(LPVOID *)(param_1 + 1));
  if (-1 < HVar1) {
    iVar6 = 4;
    bVar9 = true;
    piVar4 = &DAT_5f9eee58;
    piVar7 = param_3;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *piVar4 == *piVar7;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      HVar1 = (*(code *)**(undefined4 **)piVar8[1])((undefined4 *)piVar8[1],param_3,&param_1);
      if (HVar1 < 0) goto LAB_5f951ce6;
      (**(code **)(*param_1 + 8))(param_1);
    }
    pvVar2 = GlobalAlloc(0x40,0x20);
    puVar3 = GlobalLock(pvVar2);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_5f94fbe0(puVar3);
    }
    *piVar8 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      pvVar2 = GlobalAlloc(0x40,0x24);
      puVar3 = GlobalLock(pvVar2);
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_5f950980(puVar3);
      }
      piVar8[2] = (int)piVar4;
      if (piVar4 != (int *)0x0) {
        HVar1 = (**(code **)(*piVar4 + 0x4c))(piVar4);
        if (-1 < HVar1) {
          pvVar2 = GlobalAlloc(0x40,0x28);
          puVar3 = GlobalLock(pvVar2);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_5f9506f0(puVar3);
          }
          piVar8[3] = (int)puVar3;
          if (puVar3 != (undefined4 *)0x0) {
            HVar1 = (**(code **)(puVar3[1] + 0x4c))(puVar3 + 1);
            if (-1 < HVar1) {
              HVar1 = (**(code **)(*(int *)*piVar8 + 0xc))((int *)*piVar8,piVar8[1],0);
              if (-1 < HVar1) {
                (*(code *)**(undefined4 **)piVar8[2])
                          ((undefined4 *)piVar8[2],&DAT_5f9eeb58,&local_8);
                HVar1 = (**(code **)(*(int *)*piVar8 + 0x4c))((int *)*piVar8,0,&stack0xfffffff0);
                if (-1 < HVar1) {
                  HVar1 = (**(code **)(*(int *)*piVar8 + 0x1c))
                                    ((int *)*piVar8,local_8,local_4,param_4);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_5f951ce6:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  uVar5 = FUN_5f951a50(HVar1);
  if (HVar1 < 0) {
    FUN_5f951ac0(piVar8);
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
  }
  return uVar5;
}


