/* Module: vegas30k.dll
   Function: FUN_010251b0
   Address: 010251b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010251b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar1 = param_1;
  puVar4 = &param_1;
  piVar3 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,puVar4);
  if (-1 < iVar2) {
    (**(code **)(*piVar1 + 0x28))
              (piVar1,unaff_ESI & 0xfffffffe,piVar3,puVar4,unaff_ESI & 0xfffffffe);
  }
  return;
}


