/* Module: vegas30k.dll
   Function: DrawTriangle
   Address: 01066d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall A_Buffer::DrawTriangle(struct SF3DTRIANGLE *) */

void __thiscall A_Buffer::DrawTriangle(A_Buffer *this,SF3DTRIANGLE *param_1)

{
  int iVar1;
  SF3DTRIANGLE *pSVar2;
  undefined4 unaff_EDI;
  SF3DPOLY *pSVar3;
  undefined4 *puVar4;
  SF3DPOLY local_3f8 [28];
  undefined4 local_3dc [7];
  undefined4 local_3c0 [238];
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x66d70  38  ?DrawTriangle@A_Buffer@@QAEXPAUSF3DTRIANGLE@@@Z */
  local_8 = *(undefined4 *)(param_1 + 0x54);
  local_4 = 3;
  pSVar2 = param_1;
  pSVar3 = local_3f8;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    pSVar3 = pSVar3 + 4;
  }
  pSVar2 = param_1 + 0x1c;
  puVar4 = local_3dc;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pSVar2 = param_1 + 0x38;
  puVar4 = local_3c0;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  DrawComplexPoly(this,local_3f8,5.29980882362664e-315,(double)CONCAT44(unaff_EDI,0x3ff00000));
  return;
}


