/* Module: sctplug.dll
   Function: FUN_00405900
   Address: 00405900
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00405900(int *param_1,int param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  piVar1 = param_1;
  if (*(int *)(param_1[1] + 0x214) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  iVar3 = piVar1[1];
  piVar1[0x3a] = 0;
  piVar1[0x37] = 0;
  piVar1[0x38] = 0;
  piVar1[0x3b] = 0;
  piVar1[5] = param_2;
  piVar1[0x10] = *(int *)(iVar3 + 0x238);
  piVar1[0x11] = *(int *)(iVar3 + 0x23c);
  piVar1[0xc] = *(int *)(iVar3 + 0x248);
  piVar1[0xd] = *(int *)(iVar3 + 0x24c);
  piVar1[0xe] = *(int *)(iVar3 + 0x240);
  piVar1[0xf] = *(int *)(iVar3 + 0x244);
  FUN_00404ef0(iVar3,&param_1);
  uVar5 = ftol();
  *(undefined8 *)(piVar1 + 8) = uVar5;
  piVar1[0x14] = 0;
  if ((LPCVOID)piVar1[0x15] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)piVar1[0x15]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)piVar1[0x15]);
    GlobalFree(pvVar2);
    piVar1[0x15] = 0;
  }
  FUN_00405cd0((int)piVar1);
  (**(code **)(*piVar1 + 0x34))(piVar1,0,0);
  iVar3 = FUN_00405be0((int)piVar1);
  if (iVar3 != 0) {
    uVar4 = FUN_00405e60((int)piVar1);
    return uVar4;
  }
  return 0;
}


