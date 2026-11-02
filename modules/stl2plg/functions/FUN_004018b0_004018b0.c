/* Module: stl2plg.dll
   Function: FUN_004018b0
   Address: 004018b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004018b0(int *param_1)

{
  void *this;
  int iVar1;
  HGLOBAL hMem;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (-1 < iVar1) {
    if (param_1[0xea] == 0) {
      param_1[0xeb] = unaff_retaddr;
      hMem = GlobalAlloc(0x40,unaff_retaddr * 0x198 + 4);
      piVar2 = GlobalLock(hMem);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = unaff_retaddr;
        piVar2 = piVar2 + 1;
        piVar4 = piVar2;
        if (-1 < unaff_retaddr + -1) {
          do {
            FUN_00402820(piVar4);
            unaff_retaddr = unaff_retaddr + -1;
            piVar4 = piVar4 + 0x66;
          } while (unaff_retaddr != 0);
        }
      }
      param_1[0xea] = (int)piVar2;
    }
    else if (unaff_retaddr != param_1[0xeb]) {
      return -0x7ff8ffa9;
    }
    iVar1 = -0x7ff8fff2;
    if ((param_1[0xea] != 0) && (iVar1 = FUN_00401870(param_1), -1 < iVar1)) {
      *(undefined4 *)(param_1[0xea] + 0x188) = 2;
      *(undefined4 *)(param_1[0xea] + 0x18c) = 0;
      iVar1 = FUN_004027e0((void *)(param_1[0xea] + 8),(int)(param_1 + 0x8a));
      if (-1 < iVar1) {
        if (*(int *)(param_1[0xea] + 400) == 0) {
          uVar3 = (**(code **)(*param_1 + 0x74))(param_1);
          FUN_00402890((void *)param_1[0xea],uVar3);
        }
        this = *(void **)(param_1[0xea] + 400);
        if (this != (void *)0x0) {
          iVar1 = FUN_00402050(this,param_1 + 5,0,param_1[0xea] + 8);
          return iVar1;
        }
        iVar1 = -0x7ff8fff2;
      }
    }
  }
  return iVar1;
}


