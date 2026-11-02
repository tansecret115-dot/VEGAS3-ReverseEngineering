/* Module: vegas30k.dll
   Function: FUN_010447b0
   Address: 010447b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010447b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,LPCSTR param_6,undefined4 param_7)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  int *piVar8;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x44) = param_5;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x468) = param_7;
  lpWideCharStr = (LPWSTR)(param_1 + 0x260);
  if (param_6 == (LPCSTR)0x0) {
    *lpWideCharStr = L'\0';
  }
  else {
    MultiByteToWideChar(0,1,param_6,-1,lpWideCharStr,0x104);
    *(undefined2 *)(param_1 + 0x466) = 0;
  }
  CoInitialize((LPVOID)0x0);
  piVar2 = (int *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x40) = 1;
  local_8 = _SfList_CreateExZ_32(piVar2,4,0xffffffff,0xffffffff,0,0,0,0);
  if (-1 < local_8) {
    iVar1 = param_1 + 0x3c;
    _SfMetric_OpenSubKey_12(iVar1,DAT_0120e5c4,"FileIOManger");
    iVar5 = (**(code **)(*(int *)(param_1 + 8) + 0x18))(param_1 + 8,0x271a,0);
    if (iVar5 == 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x44);
      iVar5 = *piVar2;
      uVar9 = 4;
    }
    else {
      FUN_01044b00(*piVar2,"Software\\Sonic Foundry Beta\\File Formats 2",2,
                   *(undefined4 *)(param_1 + 0x44));
      uVar10 = *(undefined4 *)(param_1 + 0x44);
      iVar5 = *piVar2;
      uVar9 = 3;
    }
    FUN_01044b00(iVar5,"Software\\Sonic Foundry\\File Formats 2",uVar9,uVar10);
    piVar8 = *(int **)(param_1 + 0x2c);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    pvVar6 = GlobalAlloc(0x40,0x14);
    pvVar7 = GlobalLock(pvVar6);
    if ((pvVar7 != (LPVOID)0x0) && (piVar8 = (int *)FUN_0104b310(), piVar8 != (int *)0x0)) {
      iVar5 = FUN_0104b330(*piVar2,param_1);
      if (iVar5 < 0) {
        (**(code **)(*piVar8 + 0x28))(1);
      }
      else {
        (**(code **)*piVar8)(piVar8,&DAT_011da140,param_1 + 0x2c);
      }
    }
    piVar8 = *(int **)(param_1 + 0x24);
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
      *piVar8 = (int)&PTR_LAB_011dd7cc;
      *(int **)(param_1 + 0x24) = piVar8;
      (**(code **)(*piVar8 + 4))(piVar8);
      local_8 = (**(code **)(*piVar8 + 0x30))
                          (piVar8,param_1,0,iVar1,unaff_retaddr,param_1,
                           -(uint)(*lpWideCharStr != L'\0') & (uint)lpWideCharStr,piVar8,*piVar2);
      if (-1 < local_8) {
        FUN_01043d20(iVar1,unaff_retaddr,param_1,param_2,lpWideCharStr,param_4,*piVar2);
        piVar3 = *(int **)(param_1 + 0x28);
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
          *unaff_ESI = (int)&PTR_LAB_011dd798;
          *(int **)(param_1 + 0x28) = unaff_ESI;
          (**(code **)(*unaff_ESI + 4))(unaff_ESI);
          local_8 = (**(code **)(*unaff_ESI + 0x30))
                              (unaff_ESI,param_1,local_8,iVar1,unaff_retaddr,param_1,
                               -(uint)(*lpWideCharStr != L'\0') & (uint)lpWideCharStr,piVar8,*piVar2
                              );
          if (-1 < local_8) {
            FUN_01044660(iVar1,unaff_retaddr,param_1,param_2,
                         -(uint)(*lpWideCharStr != L'\0') & (uint)lpWideCharStr,param_4,*piVar2);
            iVar5 = 0;
            iVar1 = *(int *)*piVar2;
            if (iVar1 < 1) {
              return local_8;
            }
            do {
              iVar4 = *(int *)(*(int *)(*piVar2 + 8) + iVar5 * 4);
              if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x244) & 1) != 0)) {
                FUN_010441e0(iVar4);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar1);
            return local_8;
          }
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar2 == (int *)0x0) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x24))(1);
      }
    }
    else {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 == (int *)0x0) {
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 0x24))(1);
      }
    }
    else {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*unaff_EBP != 0) {
      _SfMetric_Close_4(*unaff_EBP);
    }
    *unaff_EBP = 0;
  }
  return local_8;
}


