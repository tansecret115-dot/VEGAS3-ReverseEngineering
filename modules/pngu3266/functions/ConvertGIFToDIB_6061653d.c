/* Module: pngu3266.dll
   Function: ConvertGIFToDIB
   Address: 6061653d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall XPNGifImage::ConvertGIFToDIB(class CGIFImage &,unsigned char
   *,unsigned long) */

long __thiscall
XPNGifImage::ConvertGIFToDIB(XPNGifImage *this,CGIFImage *param_1,uchar *param_2,ulong param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  byte *pbVar9;
  uint _Size;
  ulong local_c;
  ulong local_8;
  
                    /* 0x2653d  880  ?ConvertGIFToDIB@XPNGifImage@@IAEJAAVCGIFImage@@PAEK@Z */
  uVar7 = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    param_2 = *(uchar **)(param_1 + 0x3c);
    uVar7 = *(ulong *)(param_1 + 0x20);
  }
  _Size = (*(int *)(param_1 + 8) * 8 + 0x1fU >> 3 & 0x1ffffffc) * *(int *)(param_1 + 0xc);
  pvVar8 = operator_new(uVar7 * 4 + 0x28);
  *(void **)(this + 0x2a) = pvVar8;
  pvVar8 = operator_new(_Size);
  puVar2 = *(undefined4 **)(this + 0x2a);
  *(void **)(this + 0x2e) = pvVar8;
  if (puVar2 != (undefined4 *)0x0) {
    if (pvVar8 != (void *)0x0) {
      *puVar2 = 0x28;
      *(undefined4 *)(*(int *)(this + 0x2a) + 4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(*(int *)(this + 0x2a) + 8) = *(undefined4 *)(param_1 + 0xc);
      *(undefined2 *)(*(int *)(this + 0x2a) + 0xc) = 1;
      *(undefined2 *)(*(int *)(this + 0x2a) + 0xe) = 8;
      *(undefined4 *)(*(int *)(this + 0x2a) + 0x10) = 0;
      *(uint *)(*(int *)(this + 0x2a) + 0x14) = _Size;
      *(undefined4 *)(*(int *)(this + 0x2a) + 0x18) = 0;
      *(undefined4 *)(*(int *)(this + 0x2a) + 0x1c) = 0;
      *(ulong *)(*(int *)(this + 0x2a) + 0x20) = uVar7;
      *(undefined4 *)(*(int *)(this + 0x2a) + 0x24) = 0;
      pvVar8 = (void *)(*(int *)(this + 0x2a) + 0x28);
      memset(pvVar8,0,uVar7 * 4);
      param_3 = 0;
      local_8 = 0;
      local_c = 0;
      GetRGBIndices(this,&param_3,&local_8,&local_c);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uchar *)(param_3 + (int)pvVar8) = *param_2;
        *(uchar *)(local_8 + (int)pvVar8) = param_2[1];
        *(uchar *)(local_c + (int)pvVar8) = param_2[2];
        pvVar8 = (void *)((int)pvVar8 + 4);
        param_2 = param_2 + 3;
      }
      memset(*(void **)(this + 0x2e),0,_Size);
      pbVar3 = *(byte **)(this + 0x2e);
      iVar4 = *(int *)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 0x4c);
      for (iVar5 = *(int *)(param_1 + 0xc); iVar6 = iVar4, iVar5 != 0; iVar5 = iVar5 + -1) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*(int *)(this + (uint)*pbVar9 * 4 + 0x32) == 0) {
            *(undefined4 *)(this + (uint)*pbVar9 * 4 + 0x32) = 1;
          }
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
        }
        pbVar3 = pbVar3 + ((iVar4 * 8 + 0x1fU >> 3 & 0x1ffffffc) - iVar4);
      }
      return 0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete(puVar2);
      *(undefined4 *)(this + 0x2a) = 0;
    }
  }
  if (*(void **)(this + 0x2e) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x2e));
    *(undefined4 *)(this + 0x2e) = 0;
  }
  return -0x7ff8fff2;
}


