/* Module: wmfplug2.dll
   Function: FUN_00412710
   Address: 00412710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00412710(void *this,HWND param_1)

{
  int *piVar1;
  int iVar2;
  char local_400 [1024];
  
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar2 == 0) {
    return -0x7ff8ffa9;
  }
  piVar1 = FUN_00412200(*(int **)(iVar2 + 0x74),*(int *)(iVar2 + 0x78),1);
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_00412280(this,*(int *)(*(int *)((int)this + 0x34) + 0x424));
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
    if (iVar2 == 0) {
      return -0x7ff8ffa9;
    }
    if ((*(int *)(iVar2 + 0x78) != 0) &&
       (piVar1 = FUN_00412200(*(int **)(iVar2 + 0x74),*(int *)(iVar2 + 0x78),1),
       piVar1 == (int *)0x0)) {
      return -0x7fffbffb;
    }
  }
  GetDlgItemTextA(param_1,0x78cd,local_400,0x400);
  if (local_400[0] == '\0') {
    *(undefined2 *)(piVar1 + 3) = 0;
  }
  else {
    MultiByteToWideChar(0,1,local_400,-1,(LPWSTR)(piVar1 + 3),0x104);
    *(undefined2 *)((int)piVar1 + 0x212) = 0;
  }
  GetDlgItemTextA(param_1,0x78cc,local_400,0x400);
  if (local_400[0] == '\0') {
    *(undefined2 *)(piVar1 + 0x85) = 0;
  }
  else {
    MultiByteToWideChar(0,1,local_400,-1,(LPWSTR)(piVar1 + 0x85),0x104);
    *(undefined2 *)((int)piVar1 + 0x41a) = 0;
  }
  GetDlgItemTextA(param_1,0x78cf,local_400,0x400);
  if (local_400[0] == '\0') {
    *(undefined2 *)(piVar1 + 0x107) = 0;
  }
  else {
    MultiByteToWideChar(0,1,local_400,-1,(LPWSTR)(piVar1 + 0x107),0x104);
    *(undefined2 *)((int)piVar1 + 0x622) = 0;
  }
  GetDlgItemTextA(param_1,0x78ce,local_400,0x400);
  if (local_400[0] == '\0') {
    *(undefined2 *)(piVar1 + 0x189) = 0;
  }
  else {
    MultiByteToWideChar(0,1,local_400,-1,(LPWSTR)(piVar1 + 0x189),0x104);
    *(undefined2 *)((int)piVar1 + 0x82a) = 0;
  }
  GetDlgItemTextA(param_1,0x78d0,local_400,0x400);
  if (local_400[0] == '\0') {
    *(undefined2 *)(piVar1 + 0x20b) = 0;
    return 0;
  }
  MultiByteToWideChar(0,1,local_400,-1,(LPWSTR)(piVar1 + 0x20b),0x104);
  *(undefined2 *)((int)piVar1 + 0xa32) = 0;
  return 0;
}


