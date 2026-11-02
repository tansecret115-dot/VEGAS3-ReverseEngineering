/* Module: rmme3260.dll
   Function: FUN_66267d00
   Address: 66267d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66267d00(void *this,DWORD param_1,HKEY param_2)

{
  HKEY pHVar1;
  LSTATUS LVar2;
  undefined4 *puVar3;
  int *piVar4;
  LPSTR lpName;
  
  pHVar1 = param_2;
  param_2->unused = 0;
  param_2 = (HKEY)0x0;
  LVar2 = RegOpenKeyA((HKEY)0x80000000,(LPCSTR)((int)this + 0xc),&param_2);
  if (LVar2 == 0) {
    puVar3 = operator_new(0x28);
    if (puVar3 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_662522d0(puVar3);
    }
    pHVar1->unused = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      RegCloseKey(param_2);
      return 0x8007000e;
    }
    (**(code **)(*piVar4 + 4))(piVar4);
    (**(code **)(*(int *)pHVar1->unused + 0x14))((int *)pHVar1->unused,0x105);
    piVar4 = (int *)pHVar1->unused;
    lpName = (LPSTR)(**(code **)(*piVar4 + 0x1c))(piVar4,0x105);
    LVar2 = RegEnumKeyA(param_2,param_1,lpName,(DWORD)piVar4);
    if (LVar2 == 0) {
      RegCloseKey(param_2);
      return 0;
    }
    (**(code **)(*(int *)pHVar1->unused + 8))((int *)pHVar1->unused);
    pHVar1->unused = 0;
    RegCloseKey(param_2);
  }
  return 0x80004005;
}


