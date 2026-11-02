/* Module: sfpaplug.dll
   Function: FUN_0040d130
   Address: 0040d130
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040d130(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  undefined8 uVar4;
  int unaff_retaddr;
  
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (-1 < iVar2) {
    iVar2 = FUN_0040cb10((int)param_1);
    if (-1 < iVar2) {
      hMem = GlobalAlloc(0x42,unaff_retaddr * 0x28);
      puVar3 = GlobalLock(hMem);
      param_1[0x9a] = (int)puVar3;
      *puVar3 = 1;
      *(undefined4 *)(param_1[0x9a] + 4) = 0;
      uVar4 = ftol();
      *(undefined8 *)(param_1[0x9a] + 8) = uVar4;
      *(int *)(param_1[0x9a] + 0x10) = param_1[0x96];
      *(int *)(param_1[0x9a] + 0x14) = param_1[0x94];
      iVar1 = param_1[0x9a];
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
  }
  return iVar2;
}


