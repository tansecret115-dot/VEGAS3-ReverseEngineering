/* Module: rmbe3260.dll
   Function: FUN_66052470
   Address: 66052470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66052470(void *this,HMODULE param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  uint uVar5;
  int *piVar6;
  LPCSTR pCVar7;
  DWORD nSize;
  UINT uSize;
  int local_14 [3];
  int local_8;
  
  local_8 = 0;
  pcVar2 = getenv(&DAT_6606f2c8);
  if (pcVar2 != (char *)0x0) {
    FUN_6605b970((int *)((int)this + 4),pcVar2);
    iVar3 = (**(code **)(*(int *)this + 0x24))();
    if (iVar3 == 0) {
      thunk_FUN_6605b610((int *)((int)this + 4));
    }
    else {
      local_8 = 1;
    }
  }
  if (local_8 == 0) {
    if (param_1 != (HMODULE)0x0) {
      piVar1 = (int *)((int)this + 4);
      nSize = 0x104;
      pCVar4 = (LPSTR)FUN_6605bc10(piVar1,0x105);
      GetModuleFileNameA(param_1,pCVar4,nSize);
      FUN_6605bc90(piVar1,-1);
      uVar5 = FUN_6605bf70(piVar1,'\\');
      if (uVar5 == 0xffffffff) {
        thunk_FUN_6605b610(piVar1);
      }
      else {
        piVar6 = FUN_6605bf20(piVar1,local_14,uVar5);
        FUN_6605b900(piVar1,piVar6);
        FUN_6605b770(local_14);
      }
      iVar3 = (**(code **)(*(int *)this + 0x24))();
      if (iVar3 == 0) {
        thunk_FUN_6605b610(piVar1);
      }
      else {
        local_8 = 1;
      }
    }
    if (local_8 == 0) {
      piVar1 = (int *)((int)this + 4);
      uSize = 0x104;
      pCVar4 = (LPSTR)FUN_6605bc10(piVar1,0x105);
      GetWindowsDirectoryA(pCVar4,uSize);
      FUN_6605bc90(piVar1,-1);
      iVar3 = (**(code **)(*(int *)this + 0x24))();
      if (iVar3 == 0) {
        thunk_FUN_6605b610(piVar1);
      }
      else {
        local_8 = 1;
      }
      if (local_8 == 0) {
        return 0;
      }
    }
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pCVar7 = *(LPCSTR *)((int)this + 4);
    piVar1 = (int *)((int)this + 4);
    pCVar7 = FUN_66052030(pCVar7,pCVar7 + *(int *)(pCVar7 + -8));
    if ((pCVar7 + 1 != (LPCSTR)(*(int *)(*piVar1 + -8) + *piVar1)) || (*pCVar7 != '\\')) {
      FUN_6605bba0(piVar1,&DAT_6606c264);
    }
    FUN_6605bba0(piVar1,param_2);
  }
  return local_8;
}


