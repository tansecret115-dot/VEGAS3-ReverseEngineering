/* Module: qt4plug.dll
   Function: FUN_5f51b480
   Address: 5f51b480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f51b480(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *this;
  int *piVar3;
  int unaff_EBX;
  int iVar4;
  int *unaff_ESI;
  undefined4 *puVar5;
  int iVar6;
  int unaff_retaddr;
  int iVar7;
  undefined1 local_8 [4];
  int iStack_4;
  
  this = param_1;
  iStack_4 = (**(code **)(*param_1 + 0x3c))(param_1,local_8);
  piVar3 = param_1;
  if (iStack_4 < 0) {
    return iStack_4;
  }
  if ((int)param_1 + param_2 <= unaff_EBX) {
    if (this[0xd3] == 0) {
      iStack_4 = FUN_5f51b1c0(this);
    }
    if (this[0xd3] != 0) {
      iVar7 = 0;
      if (unaff_EBX <= (int)piVar3) {
        return iStack_4;
      }
      iVar4 = (int)piVar3 * 0x30;
      puVar5 = (undefined4 *)(unaff_retaddr + 0x14);
      do {
        if (param_2 <= iVar7) {
          return iStack_4;
        }
        iVar6 = 0;
        if ((*(int *)(iVar4 + 0x28 + this[0xd3]) == 0) &&
           (iVar6 = FUN_5f51b080(this,(int)piVar3), iVar6 < 0)) {
LAB_5f51b623:
          iStack_4 = iVar6;
        }
        else {
          iVar1 = *(int *)(iVar4 + this[0xd3]);
          puVar5[-5] = iVar1;
          if (iVar1 == 1) {
            param_1 = (int *)0x0;
            puVar2 = *(undefined4 **)(iVar4 + 0x28 + this[0xd3]);
            iVar6 = (**(code **)*puVar2)(puVar2,&DAT_5f595b40,&param_1);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*param_1 + 0x30))
                                (param_1,puVar5[-4],puVar5[-3],puVar5 + -2,puVar5[-1],*puVar5,
                                 puVar5 + 1);
              (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            }
            iVar1 = this[0xd3];
            puVar5[2] = *(undefined4 *)(iVar4 + 0x18 + iVar1);
            puVar5[3] = *(undefined4 *)(iVar4 + 0x1c + iVar1);
          }
          else if (iVar1 == 2) {
            param_1 = (int *)0x0;
            puVar2 = *(undefined4 **)(iVar4 + 0x28 + this[0xd3]);
            iVar6 = (**(code **)*puVar2)(puVar2,&DAT_5f595b60,&param_1);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*param_1 + 0x38))
                                (param_1,puVar5[-4],puVar5[-3],puVar5 + -2,puVar5[-1],*puVar5,
                                 puVar5 + 1);
              (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            }
            iVar1 = this[0xd3];
            puVar5[2] = *(undefined4 *)(iVar4 + 0x18 + iVar1);
            puVar5[3] = *(undefined4 *)(iVar4 + 0x1c + iVar1);
          }
          if (iVar6 < 0) goto LAB_5f51b623;
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 0xb;
        piVar3 = (int *)((int)piVar3 + 1);
        iVar4 = iVar4 + 0x30;
        if (unaff_EBX <= (int)piVar3) {
          return iStack_4;
        }
      } while( true );
    }
  }
  return -0x7ff8ffa9;
}


