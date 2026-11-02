/* Module: rmme3260.dll
   Function: FUN_66247800
   Address: 66247800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66247800(int param_1)

{
  int iVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD local_42c [3];
  uint local_41e;
  
  iVar1 = FUN_662406e0(*(int *)(param_1 + 0x3a));
  pDVar3 = local_42c;
  for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar3 = 0;
    pDVar3 = pDVar3 + 1;
  }
  FUN_6624ae60((uint *)(iVar1 + 0x48),local_42c);
  switch(local_41e & 0xffff) {
  case 8:
  case 0xf:
  case 0x10:
  case 0x18:
  case 0x20:
    return 0x101010;
  default:
    return 0xffff00;
  }
}


