/* Module: mp3plug.dll
   Function: FUN_5f695fe0
   Address: 5f695fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5f695fe0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *_Memory;
  int iVar4;
  uint extraout_EDX;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  
  uVar5 = param_3;
  lVar7 = FUN_5f6ce290((uint)param_2,param_3,param_4);
  puVar1 = (uint *)lVar7;
  if (puVar1 == (uint *)0x0) {
    return CONCAT44((int)((ulonglong)lVar7 >> 0x20),0x8004e011);
  }
  puVar2 = (uint *)FUN_5f6cec90((int)puVar1);
  if (puVar2 != (uint *)0x0) {
    FUN_5f6cecb0(puVar1,puVar2);
  }
  piVar3 = FUN_5f6ce870((int *)puVar1);
  if ((piVar3 != (int *)0x0) && (param_4 = 0, 0 < *piVar3)) {
    piVar6 = piVar3 + 2;
    do {
      if (uVar5 == 2) {
        if (*piVar6 == 2) {
LAB_5f696063:
          _Memory = calloc(1,0xc);
          if (_Memory != (int *)0x0) {
            *_Memory = 0;
            _Memory[1] = 0;
            _Memory[2] = 0;
            *_Memory = piVar6[1];
            _Memory[1] = piVar6[-1];
            _Memory[2] = *piVar6;
            iVar4 = FUN_5f6960f0(param_1,_Memory);
            if (iVar4 == 0) {
              param_2 = _Memory;
              FUN_5f6b5190(param_1,-1,(int *)&param_2,1);
            }
            else {
              free(_Memory);
            }
          }
        }
      }
      else if ((uVar5 == 1) && (*piVar6 == 1)) goto LAB_5f696063;
      param_4 = param_4 + 1;
      piVar6 = piVar6 + 3;
      uVar5 = param_3;
    } while ((int)param_4 < *piVar3);
  }
  FUN_5f6ce3a0(puVar1);
  return (ulonglong)extraout_EDX << 0x20;
}


