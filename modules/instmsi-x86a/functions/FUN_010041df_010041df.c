/* Module: InstMsi-x86a.exe
   Function: FUN_010041df
   Address: 010041df
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_010041df(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1 * 0x18;
  if (*(int *)(&DAT_0100b844 + iVar1) == 0) {
    BVar2 = ReadFile(*(HANDLE *)(&DAT_0100b854 + iVar1),param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      param_3 = 0xffffffff;
    }
  }
  else if (*(int *)(&DAT_0100b844 + iVar1) == 1) {
    uVar3 = *(int *)(&DAT_0100b850 + iVar1) - *(int *)(&DAT_0100b84c + iVar1);
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    param_3 = uVar3;
    puVar4 = (undefined4 *)(*(int *)(&DAT_0100b848 + iVar1) + *(int *)(&DAT_0100b84c + iVar1));
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    *(uint *)(&DAT_0100b84c + iVar1) = *(int *)(&DAT_0100b84c + iVar1) + param_3;
  }
  return param_3;
}


