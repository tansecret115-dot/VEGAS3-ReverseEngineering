/* Module: sfs4rw.dll
   Function: FUN_00405310
   Address: 00405310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405310(int param_1,int param_2,int param_3)

{
  void *this;
  int iVar1;
  BYTE *pBVar2;
  uchar *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  UINT UVar6;
  short local_40c [2];
  uchar local_408 [260];
  uchar local_304 [512];
  uchar local_104 [260];
  
  this = DAT_004a8128;
  if (DAT_004a8128 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_004061d0(param_2,param_3);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x244) != 0)) {
    *(int *)((int)this + 0x7f4) = *(int *)(iVar1 + 0x244);
  }
  iVar1 = FUN_00416740((int)this);
  if (iVar1 < 0) {
    FUN_00416a10(this,local_40c);
    pBVar2 = FUN_0041f970(DAT_004a811c,0x274b);
    FUN_00420f60(local_304,pBVar2);
    puVar3 = FUN_00417090(local_40c[0]);
    _mbscat(local_304,puVar3);
    UVar6 = 0x10;
    pCVar4 = FUN_0041f970(DAT_004a811c,0x2749);
    MessageBoxA((HWND)0x0,(LPCSTR)local_304,pCVar4,UVar6);
    return 0;
  }
  uVar5 = 0xf0000000;
  if (*(uint *)(param_1 + 0x1e8) != 0) {
    uVar5 = *(uint *)(param_1 + 0x1e8);
  }
  iVar1 = FUN_00416800(this,uVar5);
  if (iVar1 < 0) {
    FUN_00416a10(this,local_40c);
    pBVar2 = FUN_0041f970(DAT_004a811c,0x274c);
    FUN_00420f60(local_304,pBVar2);
    puVar3 = FUN_00417090(local_40c[0]);
    _mbscat(local_304,puVar3);
    if (*(int *)((int)this + 0x7f4) == 0) {
      puVar3 = FUN_0041f970(DAT_004a811c,0x274d);
      _mbscat(local_304,puVar3);
    }
    UVar6 = 0x10;
    pCVar4 = FUN_0041f970(DAT_004a811c,0x2749);
    MessageBoxA((HWND)0x0,(LPCSTR)local_304,pCVar4,UVar6);
    return 0;
  }
  if (*(int *)(param_1 + 0x254) == 0) {
    GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_408,0x104);
    FUN_0041c6b0((LPCSTR)local_408);
    pCVar4 = FUN_0041c720((LPCSTR)local_408);
    *pCVar4 = '\0';
    _mbscat(local_408,(uchar *)"k.dll");
    FUN_00420f60(local_104,(BYTE *)"%s Object");
    FUN_00416a50(this,local_104,local_408);
  }
  return 1;
}


