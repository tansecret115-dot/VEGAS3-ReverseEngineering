/* Module: rmto3260.dll
   Function: FUN_662f3260
   Address: 662f3260
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f3260(void *this,HMODULE param_1,char *param_2)

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
  pcVar2 = getenv(&DAT_6630b524);
  if (pcVar2 != (char *)0x0) {
    FUN_662ef2f0((int *)((int)this + 4),pcVar2);
    iVar3 = (**(code **)(*(int *)this + 0x24))();
    if (iVar3 == 0) {
      thunk_FUN_662eef90((int *)((int)this + 4));
    }
    else {
      local_8 = 1;
    }
  }
  if (local_8 == 0) {
    if (param_1 != (HMODULE)0x0) {
      piVar1 = (int *)((int)this + 4);
      nSize = 0x104;
      pCVar4 = (LPSTR)FUN_662ef590(piVar1,0x105);
      GetModuleFileNameA(param_1,pCVar4,nSize);
      FUN_662ef610(piVar1,-1);
      uVar5 = FUN_662ef7f0(piVar1,'\\');
      if (uVar5 == 0xffffffff) {
        thunk_FUN_662eef90(piVar1);
      }
      else {
        piVar6 = FUN_662ef7a0(piVar1,local_14,uVar5);
        FUN_662ef280(piVar1,piVar6);
        FUN_662ef0f0(local_14);
      }
      iVar3 = (**(code **)(*(int *)this + 0x24))();
      if (iVar3 == 0) {
        thunk_FUN_662eef90(piVar1);
      }
      else {
        local_8 = 1;
      }
    }
    if (local_8 == 0) {
      piVar1 = (int *)((int)this + 4);
      uSize = 0x104;
      pCVar4 = (LPSTR)FUN_662ef590(piVar1,0x105);
      GetWindowsDirectoryA(pCVar4,uSize);
      FUN_662ef610(piVar1,-1);
      iVar3 = (**(code **)(*(int *)this + 0x24))();
      if (iVar3 == 0) {
        thunk_FUN_662eef90(piVar1);
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
    pCVar7 = FUN_662f44c0(pCVar7,pCVar7 + *(int *)(pCVar7 + -8));
    if ((pCVar7 + 1 != (LPCSTR)(*(int *)(*piVar1 + -8) + *piVar1)) || (*pCVar7 != '\\')) {
      FUN_662ef520(piVar1,&DAT_6630b51c);
    }
    FUN_662ef520(piVar1,param_2);
  }
  return local_8;
}


