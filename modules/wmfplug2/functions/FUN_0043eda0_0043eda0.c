/* Module: wmfplug2.dll
   Function: FUN_0043eda0
   Address: 0043eda0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043eda0(void *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                ,LPCSTR param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  LPWSTR lpWideCharStr;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *unaff_EBP;
  int iVar9;
  int *unaff_ESI;
  short *unaff_retaddr;
  undefined4 uVar10;
  uint uVar11;
  int local_8;
  
  *(undefined4 *)((int)param_1 + 0x44) = param_5;
  *(undefined2 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x468) = param_7;
  lpWideCharStr = (LPWSTR)((int)param_1 + 0x260);
  if (param_6 == (LPCSTR)0x0) {
    *lpWideCharStr = L'\0';
  }
  else {
    MultiByteToWideChar(0,1,param_6,-1,lpWideCharStr,0x104);
    *(undefined2 *)((int)param_1 + 0x466) = 0;
  }
  CoInitialize((LPVOID)0x0);
  piVar2 = (int *)((int)param_1 + 0x25c);
  *(undefined4 *)((int)param_1 + 0x40) = 1;
  local_8 = FUN_0042c080(piVar2,4,-1,-1,0);
  if (-1 < local_8) {
    puVar1 = (undefined4 *)((int)param_1 + 0x3c);
    FUN_00474eb0(puVar1,DAT_00489e2c,0x4835d0);
    iVar5 = (**(code **)(*(int *)((int)param_1 + 8) + 0x18))((int)param_1 + 8,0x271a,0);
    if (iVar5 == 0) {
      uVar11 = *(uint *)((int)param_1 + 0x44);
      piVar8 = (int *)*piVar2;
      uVar10 = 4;
    }
    else {
      FUN_0043f0f0((int *)*piVar2,"Software\\Sonic Foundry Beta\\File Formats 2",2,
                   *(uint *)((int)param_1 + 0x44));
      uVar11 = *(uint *)((int)param_1 + 0x44);
      piVar8 = (int *)*piVar2;
      uVar10 = 3;
    }
    FUN_0043f0f0(piVar8,"Software\\Sonic Foundry\\File Formats 2",uVar10,uVar11);
    piVar8 = *(int **)((int)param_1 + 0x2c);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    pvVar6 = GlobalAlloc(0x40,0x14);
    puVar7 = GlobalLock(pvVar6);
    if ((puVar7 != (undefined4 *)0x0) &&
       (piVar8 = (int *)FUN_00445900(puVar7), piVar8 != (int *)0x0)) {
      iVar5 = FUN_00445920(piVar8,*piVar2,param_1);
      if (iVar5 < 0) {
        (**(code **)(*piVar8 + 0x28))(1);
      }
      else {
        (**(code **)*piVar8)(piVar8,&DAT_0047adb0,(int)param_1 + 0x2c);
      }
    }
    piVar8 = *(int **)((int)param_1 + 0x24);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    pvVar6 = GlobalAlloc(0x40,0x14);
    piVar8 = GlobalLock(pvVar6);
    if (piVar8 == (int *)0x0) {
      local_8 = -0x7ff8fff2;
      piVar8 = (int *)0x0;
    }
    else {
      piVar8[1] = 0;
      piVar8[3] = 0;
      piVar8[4] = 0;
      *piVar8 = (int)&PTR_LAB_00483570;
      *(int **)((int)param_1 + 0x24) = piVar8;
      (**(code **)(*piVar8 + 4))(piVar8);
      local_8 = (**(code **)(*piVar8 + 0x30))
                          (piVar8,param_1,0,puVar1,unaff_retaddr,param_1,
                           -(uint)(*lpWideCharStr != L'\0') & (uint)lpWideCharStr,piVar8,*piVar2);
      if (-1 < local_8) {
        FUN_0043e310(param_1,(uint)puVar1,unaff_retaddr,(uint)param_1,param_2,lpWideCharStr,param_4,
                     (int *)*piVar2);
        piVar3 = *(int **)((int)param_1 + 0x28);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        pvVar6 = GlobalAlloc(0x40,0x14);
        unaff_ESI = GlobalLock(pvVar6);
        if (unaff_ESI == (int *)0x0) {
          unaff_ESI = (int *)0x0;
          local_8 = -0x7ff8fff2;
        }
        else {
          unaff_ESI[1] = 0;
          unaff_ESI[3] = 0;
          unaff_ESI[4] = 0;
          *unaff_ESI = (int)&PTR_LAB_0048353c;
          *(int **)((int)param_1 + 0x28) = unaff_ESI;
          (**(code **)(*unaff_ESI + 4))(unaff_ESI);
          local_8 = (**(code **)(*unaff_ESI + 0x30))
                              (unaff_ESI,param_1,local_8,puVar1,unaff_retaddr,param_1,
                               -(uint)(*lpWideCharStr != L'\0') & (uint)lpWideCharStr,piVar8,*piVar2
                              );
          if (-1 < local_8) {
            FUN_0043ec50(param_1,(uint)puVar1,unaff_retaddr,(uint)param_1,param_2,
                         -(uint)(*lpWideCharStr != L'\0') & (uint)lpWideCharStr,param_4,
                         (int *)*piVar2);
            iVar9 = 0;
            iVar5 = *(int *)*piVar2;
            if (iVar5 < 1) {
              return local_8;
            }
            do {
              iVar4 = *(int *)(*(int *)(*piVar2 + 8) + iVar9 * 4);
              if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x244) & 1) != 0)) {
                FUN_0043e7d0(param_1,iVar4);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar5);
            return local_8;
          }
        }
      }
    }
    piVar2 = *(int **)((int)param_1 + 0x24);
    if (piVar2 == (int *)0x0) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x24))(1);
      }
    }
    else {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)((int)param_1 + 0x28);
    if (piVar2 == (int *)0x0) {
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 0x24))(1);
      }
    }
    else {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    if ((void *)*unaff_EBP != (void *)0x0) {
      FUN_00475250((void *)*unaff_EBP);
    }
    *unaff_EBP = 0;
  }
  return local_8;
}


