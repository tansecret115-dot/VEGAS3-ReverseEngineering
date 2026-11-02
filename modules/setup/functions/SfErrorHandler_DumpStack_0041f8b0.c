/* Module: Setup.exe
   Function: SfErrorHandler_DumpStack
   Address: 0041f8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfErrorHandler_DumpStack(char *,unsigned int,unsigned long *,long,unsigned
   long *,long *) */

uint SfErrorHandler_DumpStack
               (char *param_1,uint param_2,ulong *param_3,long param_4,ulong *param_5,long *param_6)

{
  int iVar1;
  BOOL BVar2;
  SIZE_T SVar3;
  DWORD DVar4;
  char *pcVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPSTR pCVar8;
  int local_128;
  _MEMORY_BASIC_INFORMATION local_120;
  CHAR local_104 [260];
  
                    /* 0x1f8b0  55  ?SfErrorHandler_DumpStack@@YGIPADIPAKJ1PAJ@Z */
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (long *)0x0) {
    *param_6 = 0;
  }
  *param_1 = '\0';
  if (param_4 < 1) {
    return 0;
  }
  uVar6 = 0;
  local_128 = 0;
  pCVar7 = param_1;
  for (pCVar8 = param_1 + 0x38; pCVar8 <= param_1 + param_2; pCVar8 = pCVar8 + 0x3a) {
    iVar1 = wsprintfA(pCVar7," %08X: ",param_3);
    pCVar7 = pCVar7 + iVar1;
    BVar2 = IsBadReadPtr(param_3,4);
    if (BVar2 == 0) {
      iVar1 = wsprintfA(pCVar7,"%08X ",*param_3);
      pCVar8 = pCVar7 + iVar1;
      SVar3 = VirtualQuery((LPCVOID)*param_3,&local_120,0x1c);
      if ((SVar3 == 0x1c) && (local_120.AllocationBase != (HMODULE)0x0)) {
        iVar1 = wsprintfA(pCVar8," %08X + %X ",local_120.AllocationBase,
                          *param_3 - (int)local_120.AllocationBase);
        pCVar8 = pCVar8 + iVar1;
        DVar4 = GetModuleFileNameA(local_120.AllocationBase,local_104,0x104);
        if (DVar4 != 0) {
          pcVar5 = _SfGetFileNamePtrA_4(local_104);
          iVar1 = wsprintfA(pCVar8,"(%s)",pcVar5);
          pCVar8 = pCVar8 + iVar1;
          if (local_120.AllocationBase < (HMODULE)0x10000001) {
            uVar6 = uVar6 | 2;
            local_128 = local_128 + 1;
          }
          else {
            uVar6 = uVar6 | 4;
          }
        }
      }
    }
    else {
      lstrcpyA(pCVar7,"........ ");
      pCVar8 = pCVar7 + 9;
      uVar6 = uVar6 | 1;
    }
    *pCVar8 = '\r';
    param_3 = param_3 + 1;
    pCVar8[1] = '\n';
    pCVar7 = pCVar8 + 2;
    param_4 = param_4 + -1;
    *pCVar7 = '\0';
    if (param_4 < 1) break;
  }
  if (param_6 != (long *)0x0) {
    *param_6 = local_128;
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = uVar6;
  }
  return (int)pCVar7 - (int)param_1;
}


