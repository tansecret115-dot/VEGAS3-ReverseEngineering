/* Module: vidcap30.exe
   Function: FUN_00455660
   Address: 00455660
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00455660(int param_1)

{
  LPVOID *ppv;
  int *piVar1;
  undefined4 *puVar2;
  HRESULT HVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x3b4) == 0) &&
     (HVar3 = CoCreateInstance((IID *)&DAT_005a30f8,(LPUNKNOWN)0x0,3,(IID *)&DAT_005a1b08,
                               (LPVOID *)(param_1 + 0x3b4)), HVar3 < 0)) {
    return HVar3;
  }
  ppv = (LPVOID *)(param_1 + 0x350);
  if (*(int *)(param_1 + 0x350) == 0) {
    HVar3 = CoCreateInstance((IID *)&DAT_005a30b8,(LPUNKNOWN)0x0,3,(IID *)&DAT_005a1b38,ppv);
    if (HVar3 < 0) {
      return HVar3;
    }
    (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a2278,param_1 + 0x358);
    (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a2258,param_1 + 0x354);
    piVar1 = *(LPVOID *)(param_1 + 0x3b4);
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,*ppv);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  piVar1 = (int *)(param_1 + 0x360);
  iVar4 = FUN_00454ed0(param_1 + 0x28,1,piVar1);
  if ((-1 < iVar4) && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0)) {
    if ((DAT_005bb454 != 0) &&
       ((iVar4 = (**(code **)*puVar2)(puVar2,&DAT_005a18d8,param_1 + 0x3c8), -1 < iVar4 &&
        (iVar4 = (*(code *)**(undefined4 **)*piVar1)
                           ((undefined4 *)*piVar1,&DAT_005a18c8,param_1 + 0x3cc), -1 < iVar4)))) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x40;
    }
    iVar4 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_005a18b8,param_1 + 0x3d0)
    ;
    if (-1 < iVar4) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x80;
    }
    iVar4 = 0;
  }
  return iVar4;
}


