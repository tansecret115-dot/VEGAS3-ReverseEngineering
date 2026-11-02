/* Module: vegas30k.dll
   Function: FUN_0102b9b0
   Address: 0102b9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0102b9b0(int *param_1)

{
  LPCWSTR lpWideCharStr;
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_c;
  int *local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = (int *)0x0;
  local_38 = (int *)0x102b9d9;
  HVar2 = CoCreateInstance((IID *)&DAT_011ee740,(LPUNKNOWN)0x0,5,(IID *)&DAT_011ed260,&local_8);
  if (HVar2 != 0) {
    return param_1;
  }
  uStack_44 = 1;
  uStack_48 = 0;
  local_40 = DAT_011eec60;
  local_3c = DAT_011eec64;
  local_38 = DAT_011eec68;
  local_58 = DAT_011dab90;
  uStack_6c = 1;
  uStack_70 = 0x200000;
  local_54 = DAT_011dab94;
  local_50 = DAT_011dab98;
  local_4c = DAT_011dab9c;
  local_68 = DAT_011eec60;
  local_64 = DAT_011eec64;
  local_60 = DAT_011eec68;
  local_5c = DAT_011eec6c;
  piStack_74 = &local_c;
  piStack_78 = local_8;
  iVar3 = (**(code **)(*local_8 + 0x28))();
  piVar6 = local_54;
  if (iVar3 == 0) {
    local_68 = iVar3;
    iVar3 = (**(code **)(*local_64 + 0xc))(local_64,1,&local_68,&local_5c);
    piVar1 = local_60;
    piVar6 = local_64;
    if (iVar3 == 0) {
      do {
        piVar4 = (int *)_SfPlugIn_FindNode_8(piVar6,piStack_78);
        piVar5 = piVar6;
        if (piVar4 == (int *)0x0) {
          piVar5 = calloc(1,0x60);
          if (piVar5 != (int *)0x0) {
            piVar5[2] = *piVar1;
            piVar4 = piVar5 + 8;
            piVar5[4] = *piStack_78;
            piVar5[5] = piStack_78[1];
            piVar5[6] = piStack_78[2];
            iVar3 = piStack_78[3];
            piVar5[1] = 4;
            piVar5[7] = iVar3;
            piVar5[3] = piVar5[3] | 0x200003;
            lpWideCharStr = (LPCWSTR)piStack_78[4];
            if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
              WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)piVar4,0x40,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (piVar4 != (int *)0x0) {
              *(CHAR *)piVar4 = '\0';
            }
            *(undefined1 *)((int)piVar5 + 0x5f) = 0;
            *piVar5 = (int)piVar6;
            *piVar1 = *piVar1 + 1;
            piVar4 = piVar5;
            goto LAB_0102bb63;
          }
        }
        else {
LAB_0102bb63:
          piVar4[3] = piVar4[3] & 0xff7fffff;
          CoTaskMemFree(piStack_78);
          piVar6 = piVar5;
        }
        iVar3 = (**(code **)(*piStack_74 + 0xc))(piStack_74,1,&piStack_78,&uStack_6c);
      } while (iVar3 == 0);
      (**(code **)(*piStack_74 + 8))(piStack_74);
    }
    else {
      (**(code **)(*piStack_74 + 8))(piStack_74);
    }
  }
  (**(code **)(*local_60 + 8))(local_60);
  _fpreset();
  CoFreeUnusedLibraries();
  return piVar6;
}


