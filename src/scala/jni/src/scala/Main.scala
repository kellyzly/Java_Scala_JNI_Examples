package scala.jni

import _root_.scala.Array
import scala.native
import java.nio.ByteBuffer

object Main{

//  @native
//  def add (a:Int, b:Int):Int
//
//  @native
//  def hello(): String

  @native
  def buildSupportsOpenssl(): Boolean

  @native
  def testByteArray(byteAry:Array[Byte]):Long



  def main(args:Array[String])  {
    System.loadLibrary("HelloWorldJNIwithRegisterNatives")
   // println(",5+5="+add(5,5))
    println("buildSupportsOpenssl:"+Main.buildSupportsOpenssl)
    var byteAry:Array[Byte] =  new Array[Byte](3)
    byteAry(0)=0
    byteAry(1)=1
    byteAry(2)=2
    var a:ByteBuffer =ByteBuffer.allocate(1)
    println("testByteArray:"+testByteArray(byteAry))
    println("testByteBuffer:"+Main1.testByteBuffer(a))
  }
}

object Main1{
  @native
  def testByteBuffer(a:ByteBuffer):Long
}


