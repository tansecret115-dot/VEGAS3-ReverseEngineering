/* Module: extmondrv.dll
   Function: FUN_0040ac10
   Address: 0040ac10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ac10(uint param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  int *piVar5;
  bool bVar6;
  
  puVar1 = param_3;
  *param_3 = 0;
  if (param_1 != 0) {
    iVar4 = 4;
    bVar6 = true;
    piVar2 = &DAT_00457770;
    piVar5 = param_2;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar6 = *piVar2 == *piVar5;
      piVar2 = piVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return -0x7ffbfef0;
    }
  }
  hMem = GlobalAlloc(0x40,0x45c);
  this = GlobalLock(hMem);
  if ((this != (LPVOID)0x0) && (piVar2 = FUN_0040a550(this,param_1), piVar2 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar2 + 0x10))(piVar2);
    if ((-1 < iVar4) && (iVar4 = (**(code **)piVar2[2])(piVar2 + 2,param_1,puVar1), -1 < iVar4)) {
      piVar5 = piVar2 + 4;
      iVar3 = (**(code **)(piVar2[4] + 0x24))(piVar5);
      if ((iVar3 != 0) &&
         (iVar4 = (**(code **)(*piVar5 + 0x28))(piVar5,0,&stack0xfffffff8), -1 < iVar4)) {
        param_2 = (int *)*puVar1;
        iVar4 = (**(code **)(*unaff_EBX + 0x1c))(unaff_EBX,1,&param_2);
        if (-1 < iVar4) {
          (**(code **)(*unaff_EBX + 8))(unaff_EBX);
        }
      }
    }
    (**(code **)(piVar2[2] + 8))(piVar2 + 2);
    return iVar4;
  }
  return -0x7ff8fff2;
}


