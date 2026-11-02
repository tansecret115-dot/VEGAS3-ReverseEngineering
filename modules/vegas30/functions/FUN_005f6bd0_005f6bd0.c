/* Module: vegas30.exe
   Function: FUN_005f6bd0
   Address: 005f6bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f6bd0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE hObject;
  undefined4 *unaff_EDI;
  undefined4 local_108;
  CHAR local_104 [252];
  undefined4 uStack_8;
  
  uVar2 = 0x8000ffff;
  if (*(int *)(param_1 + 4) == 2) {
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      Sleep(10);
    }
    piVar1 = *(int **)(param_1 + 0x60);
    if (piVar1 != (int *)0x0) {
      if (((param_3 == 0) &&
          (iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,local_104,0x104), -1 < iVar3)) &&
         (hObject = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0),
         hObject != (HANDLE)0xffffffff)) {
        CloseHandle(hObject);
        (**(code **)(**(int **)(param_1 + 0x60) + 0x2c))(*(int **)(param_1 + 0x60),0,1);
        *(undefined4 *)(param_1 + 0x58) = uStack_8;
        return 0;
      }
      local_108 = 0;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x60) + 0x24))(*(int **)(param_1 + 0x60),&local_108)
      ;
      if (((-1 < iVar3) && (unaff_EDI != (undefined4 *)0x0)) && (*(int *)(param_1 + 0x6c) == 0)) {
        (**(code **)*unaff_EDI)(1);
      }
      (**(code **)(**(int **)(param_1 + 0x60) + 8))(*(int **)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x58) = uStack_8;
    }
    uVar2 = 0;
  }
  return uVar2;
}


